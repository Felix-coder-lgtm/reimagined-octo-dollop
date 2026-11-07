#include<stdio.h>
int main()
{
	int i=1,sum=0;
	while(i<=100)//先判断条件，看是否执行循环体 
	{
		sum=sum+i;
		i=i+1;
	}
	printf("sum=%d",sum);
	return 0;
}
//while语句是先判断后执行 ，可以一次都不执行循环体 

