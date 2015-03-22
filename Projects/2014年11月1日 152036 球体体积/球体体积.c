#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415926 

int main()
{
	double r,v;
	printf("请输入球体半径，以估算其体积: ");
	scanf("%lf",&r);
	v = (4.0 / 3.0) * pi * r * r * r;
	printf("以 %f 为半径的球的体积约为 %.3f \n",r,v);
	return 0; 
}
