#include <stdio.h>

int main()
{
    int a,b,c;
    printf("请输入直角三角形高度：");
    scanf("%d",&b);
    for(a=1;a<b+1;a++)
    {
	   for(c=0;c<a;c++)
	   	{
   		putchar('*');
		}
		printf("\n");    
    }
    return 0;
}
