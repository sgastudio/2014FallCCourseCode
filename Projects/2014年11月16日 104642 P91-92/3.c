#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	char a,b,x;
	int i;
	do
		x=getchar();
	while(isupper(x)==0);
	for(a='A';a<=x;a++){
		for(b='A';b<'A'+x-a;b++)
			putchar(' ');
		for(i=1;i<=2*(a-'A')+1;i++)
			putchar(a);
		putchar('\n');
	}
	system("pause");
	return 0;
}