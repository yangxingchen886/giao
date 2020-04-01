int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    int* result = malloc(numsSize * sizeof(int));
    for (int i =0;i<numsSize;i++){
        int count = 0;
        for (int j=0;j<numsSize;j++){
            if (nums[j]<nums[i]){
                count++;
            }
        }
        result[i]=count;
    }
    *returnSize=numsSize;
    return result;
}

/*
第二题
1.找出不重复的字符串放进一个变量里
2.再找出第二个不重复的字符串，两个比较长度，输出最长的那个。
*/