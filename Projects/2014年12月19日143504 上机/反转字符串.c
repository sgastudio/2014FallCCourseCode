#include <stdio.h>

void reverse(char *s)
{
    int t=0,i;
    while(*(s+t)!='\0')
    {
        t++;
    }
    for(i=0;i<t;i++)
    {
        putchar(*(s+t-i-1));
    }
}

int main()
{
    char a[100]={0};
    gets(a);
    reverse(a);
    return 0;
}
