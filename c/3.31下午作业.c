int main ()
{
    int i;
    int fenbu[11]={0};
    // 生成100个随机数的数组, 分布到0-100
    srand((unsigned int)time(NULL));
    int a[100];
    for (i = 0; i < 100; i++) {
        a[i] = rand() % 101;
    }
    for (i = 0; i < 100; ) {
        printf("%4d", a[i]);
        i++;
        if (i%10 == 0) {
            printf("\n");
        }
    }
    for (i=0;i<100;i++){
        fenbu[a[i]/10]++;
    }
    int max=fenbu[0];
    for (i=0;i<11;i++){
        if (fenbu[i]>max){
            max=fenbu[i];
        }
        for (;max>0;max--){
            for(i=0;i<11;i++){
                if(fenbu[i]>max){
                    printf(" *   ");
                }
                else{
                    printf("     ");
                }
            }
            putchar('\n');
        }
    }
    for(i=0;i<11;i++){
        printf("-----");
    }
    printf("\n");
    for (i = 0; i < 11; i++)
     {
         printf("%2d   ", i * 10);
     }
    printf("\n");
}