#include<stdio.h>//编译预处理指令 
int main()//定义主函数 
{
	int i,s,n;//定义整型变量i,s,n 
	scanf("%d",&n);//键盘输入n的值 
	i=1,s=1;//赋值 
	do//先执行一次 
	{
		
		s=s*i;
		i++;
	}while(i<=n);//判断是否执行循环体 
	printf("s=%d,n=%d",s,n);
	return 0;//返回函数 
}
