\\
#include <stdio.h>
double cuboid(double length, double width, double height)
{
    
    return length * width * height;
}
//斐波拉契数列
int main(void)
{
    double cuboid(double length, double width, double height);

    printf("%lf",cuboid(10,10,10));
    return 0;
}

#include <stdio.h>
int fib(int n)
{
    if (n==1||n==2)
    {
        return 1;
    }
    else
    {
    return fib(n-1)+fib(n-2);
    }
    
}

int main(void)
{
    int a;
    int fib(int n);
    printf("请输入第n项斐波拉契数列：");
    scanf("%d",&a);
    printf("第%d项：%d",a,fib(a));
    return 0;
}

//最大数ß
#include <stdio.h>
int max(int a, int b, int c)
{
    int zd=a;
    if (b>zd){
        zd=b;
    }
    if (c>zd)
    {
        zd=c;
    }
    return zd;
}

int main(void)
{
    int a1,a2,a3;
    int max(int a, int b, int c);
    printf("输入三个数：");
    scanf("%d%d%d",&a1,&a2,&a3);
    printf("三个数最大的数为：%d\n",max(a1,a2,a3));
    return 0;
}