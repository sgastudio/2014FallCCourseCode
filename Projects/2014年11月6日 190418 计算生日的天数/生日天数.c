#include <stdio.h>

int main()
{
	int y,m,d,big,small,count;
	printf("�������������������(��1990-5-6)���Լ������Ϊ����ĵڼ��죺");
	scanf("%d-%d-%d",&y,&m,&d);
	switch(m){
		case 1:big = 0;small = 0;break;
		case 2:big = 1;small = 0;break;
		case 3:big = 1;small = 0;break;
		case 4:big = 2;small = 0;break;
		case 5:big = 2;small = 1;break;
		case 6:big = 3;small = 1;break;
		case 7:big = 3;small = 2;break;
		case 8:big = 4;small = 2;break;
		case 9:big = 5;small = 2;break;
		case 10:big = 5;small = 3;break;
		case 11:big = 6;small = 3;break;
		case 12:big = 6;small = 4;break;
		default:printf("����������飡"); 
	}
		count = daycount(big,small,y);
		if(m>2)
		{
			if(y%400==0||(y%4==0&&y%100!=0))
			{
				count += 29;
			}
			else
			{
				count += 28;
			}	
		}
		printf("���վ���%d��1��1�� %d ��\n",y,count+d);
		return 0; 
} 

int daycount(a,b,y)
{
	int allday; 
	allday = a*31+b*30;
	
	return allday;
}
