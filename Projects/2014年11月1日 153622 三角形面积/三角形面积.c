#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,h,sq;
	printf("请输入三角形的底和高，以求取其面积");
	scanf("%d%d",&a,&h);
	sq = ( 1 / 2 )* a * h;
	printf("以 %d 为底 %d 为高的三角形\n其面积为 %d ",a,h,sq);
	return 0;
}
