#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,s,sq;
	printf("�����������ε������ߣ��Խ�������ļ��㣺");
	scanf("%lf%lf%lf",&a,&b,&c);
	while(c-(a+b)>=0||b-(a+c)>=0||a-(b+c)>=0)
	{
		printf("�Բ������ṩ���������޷���������Σ����鲢��������");
		scanf("%lf%lf%lf",&a,&b,&c);
	}
	s = (a+b+c)/2.0;
	sq = pow(s*(s-a)*(s-b)*(s-c),.5);
	printf("�� %f %f %f Ϊ����ɵ������Σ������Ϊ %f\n",a,b,c,sq);
	return 0;
}
