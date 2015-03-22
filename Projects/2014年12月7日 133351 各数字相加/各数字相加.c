#include <stdio.h>

int sum=0,a;

int plus(int *num)
{
	if(*num==0) return sum;
	sum+= *num % 10;
	a/=10;
	plus(&a);	 
}

int main()
{
	
	scanf("%d",&a);
	printf("%d\n",plus(&a));
	return 0;
}
