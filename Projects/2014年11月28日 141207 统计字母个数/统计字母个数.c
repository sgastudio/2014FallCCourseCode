#include <stdio.h>

int main()
{
	char text[80]={0};
	int i, num;
	gets(text);
	for(i=0, num=0; i<=79; i++)
	{
		if(text[i] == 'a')
		{
		num++;
		}	
	}
	printf("���Ӣ���ַ��й���%d����ĸa\n", num);
	return 0;
}
