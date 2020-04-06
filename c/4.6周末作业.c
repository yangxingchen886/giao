 int* constructArray(int n, int k, int* returnSize){
     int* a =malloc(n*sizeof(int));
     if (k==1){
         for (int i=0;i<n;i++){
             a[i]=i+1;
         }
     }
         else{
             for (int i=0;i<n;i++){
                 a[i]=i+1;
             }
             a[n-k]=n;
             int m=-1;
             for (int i=(n-k)+1;i<n;i++){
                 a[i] = a[i - 1] + m * (n - i);
                 m=-m;
             }
         }
     *returnSize=n;
     return a;
 }