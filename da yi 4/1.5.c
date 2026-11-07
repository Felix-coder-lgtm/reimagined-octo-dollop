#include<stdio.h>
int main()
{
	double i=1,sum=0;
	for(;i<=100;i++)//括号里面分别是 初始化表达式；条件表达式；循环控制变量表达式 
	{
		sum=sum+1.0/i;//循环体 
	}
	printf("sum=%lf",sum);
	return 0;
}
