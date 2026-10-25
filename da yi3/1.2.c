#include<stdio.h>
int main()
{
	char ch;//定义字符型变量ch 
	scanf("%c",&ch);//输入一个字符 
	if(ch>='0'&&ch<='9')//如果是阿拉伯数则为yes 
	printf("yes");
	else
	printf("no");
	return 0;
	
}
