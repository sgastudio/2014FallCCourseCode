#include <stdio.h>

int main()
{
    int a,b,c;
    getchar();

    for(a=1;a<10;a++)
    {
        for(b=1;b<=9;b++)
        {
            printf("%dx%d=%-2d ",a,b,a*b);
        }
        putchar('\n');
    }
    return 0;
}
