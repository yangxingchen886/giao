//
//  main.c
//  demo1
//
//  Created by edz on 2020/3/19.
//  Copyright © 2020 yxc. All rights reserved.
//

#include <stdio.h>

int main(void) {

   int i,n;
    int fact = 1;
    n=1;
    for(i = 1; i <= n; i++)
           fact = fact * i;
    printf("%d\n",fact);
}
//输入100结果为0应该是超出了int的取值范围。
