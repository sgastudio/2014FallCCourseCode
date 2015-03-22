#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i=1;		//第10天就剩一个了
				//第10天没吃所以吃了9天，执行9次循环
 for(int j=1;j<10;j++)
  {
    i=(i+1)*2;	//前一天多少个 
  } 
  printf("number is :%d",i);
  return 0;
 
}