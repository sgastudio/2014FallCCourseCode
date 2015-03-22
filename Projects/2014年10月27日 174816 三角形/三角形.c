#include <stdio.h>

int main()
{
    int a,b,time1,time2;
	printf("请输入要建立的三角形的高度：");
	scanf("%d",&a);
	printf("\n");
	for(b=0;b<a;b++)
	{
		for(time1=0;time1<a-b;time1++)
		{
		putchar(' ');	
		}
		for(time2=0;time2<b+1;time2++)
		{
		putchar('*');
		putchar(' ');	
		}
	putchar('\n'); 
	} 
    return 0;
}
