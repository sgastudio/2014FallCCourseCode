#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double sum=0.0;
	int num;
	for(num=1;num<=40;num++)
	{
		sum=sum+pow(-1.0,num+1)*1/num;
	}
	printf("sum=%f\n",sum);
	return 0;
}
