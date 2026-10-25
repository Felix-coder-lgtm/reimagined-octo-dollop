#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(a>='A'&&a<='Z')
	switch(a)
	{
		case 'A':printf("90~100");break;
		case 'B':printf("80~89");break;
	}
	else
	printf("ÊäÈëÊý¾Ý´íÎó");
	return 0;
	 
}
