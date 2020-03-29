//
//  main.c
//  demo1
//
//  Created by edz on 2020/3/19.
//  Copyright © 2020 yxc. All rights reserved.
//

#include <stdio.h>
//p40优化
int main(void)
{
  
    int a,b,c=1;
    double d;
    d=1.0;
    for (b=0;b<=10;b++)
    {
        for (c=1; c<=b; c++)
        {
            d=d*c;
        }
        printf("%d!=%.0f \n",b,d);
        d=1.0;
    }
    return 0;
}
//打印所示温度转换表
int main(void)
{
    int i,celsius, fahr;
    fahr = 40;
    printf(" C       F\n");
    for (i=40;i<=300;i=i+20)
    {
        celsius = 5 * (fahr - 32) / 9;
        
        if(fahr<=40)
        {
            printf("%d       %d\n", fahr, celsius);

        }
        else if (fahr<=80)
        {
            printf("%d      %d\n", fahr, celsius);
        }
        else if(fahr<=200)
        {
            printf("%d     %d\n", fahr, celsius);
        }
        else if (fahr<=300)
        {
            printf("%d    %d\n", fahr, celsius);
        }
        fahr = fahr+20;
        if (i==240) {
            i=i+40;
            fahr=fahr+40;
        }
    }
    return 0;
}

//统计字符个数
int main(void)
{
    int letter,digit,other,i;
    char ch;
    
    letter=0;
    digit=0;
    other=0;
    
    printf("请输入十个字符:");
    for(i=0;i<10;i++)
    {
        scanf("%c",&ch);
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            letter++;
        }
        else if (ch>='0'&&ch<='9')
        {
            digit++;
        }
        else
        {
            other++;
        }
    }
    printf("英文字母%d个，数字%d个，其他字符%d个。",letter,digit,other);
    return 0;
}

//根据输入的月份输出该月的天数
int main(void)
{
    int month;
    printf("请输入月份：");
    scanf("%d",&month);
    switch (month) {
        case 1:
            printf("%d月有31天\n",month);
            break;
        case 2:
            printf("%d月有28天\n",month);
            break;
        case 3:
            printf("%d月有31天\n",month);
            break;
        case 4:
            printf("%d月有30天\n",month);
            break;
        case 5:
            printf("%d月有31天\n",month);
            break;
        case 6:
            printf("%d月有30天\n",month);
            break;
        case 7:
            printf("%d月有31天\n",month);
            break;
        case 8:
            printf("%d月有31天\n",month);
            break;
        case 9:
            printf("%d月有30天\n",month);
            break;
        case 10:
            printf("%d月有31天\n",month);
            break;
        case 11:
            printf("%d月有30天\n",month);
            break;
        case 12:
            printf("%d月有31天\n",month);
            break;
        default:
            printf("请输入正确的月份\n");
            break;
    }
    return 0;
}

//素数
int main(void)
{
 int i, m;
    printf("输入一个数字：");
    scanf("%d", &m);
    for( i = 2; i <= m/2; i++ )
    {
       if( m % i== 0 )
       {
           break;
       }
    }
    if(i>m/2&&i!=1){
        printf("是素数");
    }
    else
    {
        printf("不是素数");
    }
    return 0;
}

