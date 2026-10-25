#include<stdio.h>
int main()
{
	char ch;
	ch='F';
	int b=70;
	putchar(ch);//putchar表示以字符的形式输出 
	putchar('\n');
	putchar('\106');
	putchar('\n');
	putchar('\x46');
	putchar('\n');
	putchar(b);
	putchar('\n');
	return 0;
}
