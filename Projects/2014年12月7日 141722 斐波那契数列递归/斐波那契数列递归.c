#include <stdio.h>

int n1=1,n2=1,i,sum;

int count(int *num)
{
	sum=n1+n2;
	if(*num==3) return sum;	
	n1=n2;
	n2=sum;	
	i--;
	count(&i);	
} 



int main()
{
	scanf("%d",&i);
	printf("%d\n",count(&i));
	return 0;
}