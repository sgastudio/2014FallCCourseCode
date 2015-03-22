#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main()
{	
	int sum=0,num;
	while(scanf("%d",&num)!=EOF)
	{
		sum=sum+num;	
	}
	printf("%d\n",sum);
	return 0;
}