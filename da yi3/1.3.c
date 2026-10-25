#include<stdio.h>
int main()
{
	int a,b,max;
	scanf("%d%d",&a,&b);
	max=a>b?a:b;//？代表吗？的意思：代表否则的意思 （？：是C语言中唯一的三目运算符） 
	printf("max=%d",max);
	return 0;
	
}
