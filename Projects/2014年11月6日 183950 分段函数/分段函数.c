#include <stdio.h>

int main()
{
	double x,y;
	printf("��ֱ�����x��y��ֵ���Խ��зֶμ��㣺");
	scanf("%lf%lf",&x,&y); 
	if(x>=0)
	{
		if(y>=0)
		{
			printf("%f",x*x+y*y);
		}
		else
		{
			printf("%f",x+y);
		}
	}
	else if(x<0)
	{
		if(y>=0)
		{
			printf("%f",x-y);
		}
		else
		{
			printf("%f",x*x-y*y);
		}
	}
	return 0;
}
