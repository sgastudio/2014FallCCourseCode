#include <stdio.h>
#include <math.h>

int main()
{
	int num,temp,i,sum=0;
	scanf("%d",&num);
	for(i=1;temp>=1;i++){
		temp=(num/(int)pow(10.0,(double)i-1.0))%10;
		printf("%d\n",temp);
		sum=sum+temp;
	}
	printf("%d",sum);
	return 0;
}

