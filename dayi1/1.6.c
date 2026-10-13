#include<stdio.h>//编译预处理指令 
#define PI 3.14//符号常量，定义PI 
main()//主函数入口，程序执行的起点 
{
	float r,area;//定义变量，确定为浮点型，带小数 
	r=1.5;//赋值 
	area=PI*r*r;//计算语句 
	printf("area=%f\n",area);//输出结果 
}//函数结束标志 
