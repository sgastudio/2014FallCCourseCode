#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415926 

int main()
{
	double r,v;
	printf("����������뾶���Թ��������: ");
	scanf("%lf",&r);
	v = (4.0 / 3.0) * pi * r * r * r;
	printf("�� %f Ϊ�뾶��������ԼΪ %.3f \n",r,v);
	return 0; 
}
