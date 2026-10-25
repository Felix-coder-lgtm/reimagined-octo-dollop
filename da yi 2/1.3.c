#include<stdio.h>
int main()
{
	int s=1;
	int i=2;
	do {
		s=s+i;
		i=i+1;
	}while(i<=5);//do意味着循环体内的代码至少会被执行一次，while关键字后面跟着循环条件 
	printf("s=%d",s);
	return 0;
}
