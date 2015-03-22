#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,s,sq;
	printf("请输入三角形的三条边，以进行面积的计算：");
	scanf("%lf%lf%lf",&a,&b,&c);
	while(c-(a+b)>=0||b-(a+c)>=0||a-(b+c)>=0)
	{
		printf("对不起，您提供的三条边无法组成三角形，请检查并重新输入");
		scanf("%lf%lf%lf",&a,&b,&c);
	}
	s = (a+b+c)/2.0;
	sq = pow(s*(s-a)*(s-b)*(s-c),.5);
	printf("由 %f %f %f 为边组成的三角形，其面积为 %f\n",a,b,c,sq);
	return 0;
}
