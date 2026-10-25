#include<stdio.h>
int main()
{
	int a,b;
	scanf("%2d%*d%2d",&a,&b);//scanf为输入，通过键盘等输入，&为地址运算符 ,*表示不赋值给相应变量 
	printf("%d,%d",a,b);
	return 0;
}
