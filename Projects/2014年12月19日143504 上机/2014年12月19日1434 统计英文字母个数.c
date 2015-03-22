#include<stdio.h>

void fact(char *str1)
{
	int i,t=0;
	for(i=0;*(str1+i)!='\0';i++)
	{
		if((*(str1+i)>='A'&&*(str1+i)<='Z')||(*(str1+i)>='a'&&*(str1+i)<='z')) t++;
	}
	printf("%d\n",t);
}

int main()
{
	char a[81];
    gets(a);
	fact(a);
	return 0;
}
