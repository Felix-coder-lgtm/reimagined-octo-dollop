#include<stdio.h>
int main()
{
	int number;
	scanf("%d",&number);
	if(number%5==0&&number%7==0)
	printf("yes");
	else
	printf("no");
	return 0;
}
