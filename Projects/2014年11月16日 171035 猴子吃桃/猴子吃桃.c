#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i=1;		//��10���ʣһ����
				//��10��û�����Գ���9�죬ִ��9��ѭ��
 for(int j=1;j<10;j++)
  {
    i=(i+1)*2;	//ǰһ����ٸ� 
  } 
  printf("number is :%d",i);
  return 0;
 
}