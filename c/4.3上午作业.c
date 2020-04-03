#include <stdio.h>
#include <string.h>
 void Move(char x, char y){

    printf("%c--->%c\n",x,y);

}
void hannuo(int n,char one ,char two,char three)
{
  void Move(char x,char y);
  if(n==1)Move(one, three);
  else
{
  hannuo(n-1,one ,three,two);
  Move(one,three);
  hannuo(n-1,two,one,three);
 
}
}

 
int main()
{
 int n;
printf("input your number");
scanf("%d",&n);
hannuo(n,'A','B','C');
 
}
