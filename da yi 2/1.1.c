#include<stdio.h>//编译预处理指令 
int main()//定义主函数 
{
	int m;//定义整型变量m 
	char c;//定义字符型变量c 
	m='A';
	c=66;
	printf("%c,%d\n",m,m);//%c将对应的数据按字符形式输出 ，%b将对应数据按十进制整数形式输出 
	printf("%c,%d\n",c,c);
	return 0;//函数结束，返回函数0 
}//函数执行完毕的标志 
