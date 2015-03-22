#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a,b,num[9]={1,2,3,4,5,6,7,8,9};
    for(a=0;a<9;a++)
    {
        for(b=1;b<=a+1;b++)
        {
            printf("%dx%d=%-2d ",num[a],b,num[a]*b);
        }
        putchar('\n');
    }
    return 0;
}
