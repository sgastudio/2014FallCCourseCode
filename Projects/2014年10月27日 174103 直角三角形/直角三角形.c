#include <stdio.h>

int main()
{
    int a,b,c;
    printf("������ֱ�������θ߶ȣ�");
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
