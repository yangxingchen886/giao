//上午的
int chongfu (char *s,int n){
    for (int i=0;i<n;i++){
        if (s[i]==s[n]){
            return 1;
        }
    }
    return 0;
}
int findzc(char *s){
    int i;
    int len = (int)strlen(s);
    if (len==1){
    return 1;
    }
    for (i=1;i<len;i++){
        if (chongfu(s,i))
            break;
    }
    return i;
}
int lengthOfLongestSubstring(char * s){
    int max= 0;
    int n =(unsigned int)strlen(s);
    for (int i = 0;i<n;i++){
        int current_len = findzc(s+i);
        if (current_len > max){
            max = current_len;
        }
    }
    return max;
}

//下午
int singleNumber(int* nums, int numsSize){
    if( numsSize <= 1 ){
        return nums[0];
    }
    int i,j;
    int a = 0;
    for( i = 0; i < numsSize; ++i ){
        a = 0;
        for( j = 0; j < numsSize; ++j ){
            if( i == j ){
                continue;
            }
            if( nums[i] == nums[j] ){
                a = 1;
                break;
            }
        }
        if( a == 1 ){
            continue;
        }else{
            break;
        }
    }
    return nums[i];
}
