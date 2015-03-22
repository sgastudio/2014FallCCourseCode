#include <stdio.h>

int main()
{
	char text[100],text2[100];
	int i, j, ch1;
	gets(text);
	ch1 = getchar();
	for(i=0,j=0; i<=97; i++)
	{
		if(text[i] != (char)ch1)
		{
		text2[j] = text[i];
		j++;
		}	
	}
	text[j-2]='\0'; 
	puts(text2);
	printf("\n");
	return 0;
}
