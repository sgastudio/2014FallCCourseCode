#include <stdio.h>

int main()
{
    int a,b,time1,time2;
	printf("������Ҫ�����������εĸ߶ȣ�");
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		for(time1=0;time1<a-b;time1++)
		{
		putchar(' ');	
		}
		
		for(time2=0;time2<a;time2++)
		{
		putchar('*');
		putchar(' ');	
		}
	putchar('\n'); 
	} 
    return 0;
}
