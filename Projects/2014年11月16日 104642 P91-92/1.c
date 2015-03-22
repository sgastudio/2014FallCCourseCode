#include <stdio.h>
int main()
{
	char x;
	int n=0,k=0;
	while((x=getchar())!='#')
		{
		switch(x){
			case 't':k++;break;
			case 'h':if(k==1)k++;break;
			case 'e':if(k==2)k++;break;
			default:k=0;
		}
		if(k==3)	n++;
	} 
	printf("%d\n",n);
	return 0;
}