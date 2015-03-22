#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define mega pow(10.0,-5.0)
double y;

int fx(double x)
{
	y=x*x+x*sin(x)-5.0;
	return 0;
}

int main()
{
	double a=0.0,b=5.0,c;
	c=(a+b)/2.0;
	fx(c);
	printf("%f ",c);
	printf("%f ",y);
	printf("%f",mega);
	while(fabs(y)>=mega||fabs(b-a)>=mega)
	{
		b=c;
		c=(a+b)/2.0;
	//	printf("%f",c);
		fx(c);
		printf("%f\n",y);
	}
	printf("slove can be %f",c);
	return 0;
}
