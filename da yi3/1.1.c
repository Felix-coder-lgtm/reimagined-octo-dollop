#include<stdio.h>//编译预处理指令 
int main()//定义主函数 
{
	int a;//定义整型变量a 
	scanf("%d",&a);//输入a的值 
	if(a%2==0)//若能被2整除，条件成立 
	printf("yes");//偶数则输出 
	else
	printf("no");//奇数则输出 
	return 0;//main函数返回函数0 
	
}
