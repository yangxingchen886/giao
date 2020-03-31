#include <stdio.h>
int main(void)
{
    char c;
    while ((c=getchar()) !=EOF)
    {
        if(c>='a'&&c<='z')
        {
            c=c-('a'-'A');
            printf("%c",c);
        }
        else if (c>='A'&&c<='Z')
        {
            c=c+('a'-'A');
            printf("%c",c);
        }
    }
    return 0;
}
