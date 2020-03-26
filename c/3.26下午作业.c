//
//  main.c
//  demo1
//
//  Created by edz on 2020/3/19.
//  Copyright © 2020 yxc. All rights reserved.
//

#include <stdio.h>

int main(void) {
printf("喂\n\n你好！\n再见。");

}


int main(void)
{
    int a,b;
    int c;
    printf("请输入两个整数：\n整数1：");
    scanf("%d",&a);
    printf("整数2：");
    scanf("%d",&b);
    c= a * b;
    printf("他们的乘积是：%d\n",c);
    return 0;
}


int main(void)
{
    int a,b,c;
    int d;
    printf("请输入三个整数：\n整数1：");
    scanf("%d",&a);
    printf("整数2：");
    scanf("%d",&b);
    printf("整数3：");
    scanf("%d",&c);
    d= a + b +c;
    printf("他们的和是：%d\n",d);
    return 0;
}

