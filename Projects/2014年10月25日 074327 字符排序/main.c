#include "stdlib.h"
#include "stdio.h"

int main()
{ 
	char ch1, ch2, ch3, firstc, secondc, thirdc;
	printf("�����������ַ���������(��abc)");
	scanf("%c%c%c",&ch1,&ch2,&ch3); 
	if(ch1>ch2||ch1>ch3)
	{
		firstc = ch1;
		if(ch2>ch3)
		{
			secondc = ch2;
			thirdc = ch3;
		}
		else
		{
			secondc = ch3;
			thirdc = ch2;
		}
	}
	else if (ch2>ch3) 
	{
		firstc = ch2;
		if(ch1>ch3)
		{
			secondc = ch1;
			thirdc = ch3;
		}
		else
		{
			secondc = ch3;
			thirdc = ch1;
		}
	}
	else if (ch3>ch2)
	{
		firstc = ch3;
		if(ch1>ch2)
		{
			secondc = ch1;
			thirdc = ch2;
		}
		else
		{
			secondc = ch2;
			thirdc = ch1;
		}
	}
	printf("\n�������ַ�����ASCII������Ϊ %c %c %c\n",firstc, secondc, thirdc); 
	return 0;
		
}
