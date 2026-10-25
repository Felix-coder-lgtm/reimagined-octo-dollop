#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
	case 0:printf("星期天");break;//case代表匹配哪种情况，break代表到此为止，别往下串 
	case 1:printf("星期一");break;
	return 0;
}
}
