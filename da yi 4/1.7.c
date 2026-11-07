#include<stdio.h>
int main()
{
	int a,n=2;
	scanf("%d",&a);
	for(;a>=n-1;n++)
	{
		if(a%n==0)
		break;
	}
	if(a>n)
	printf("该数不是素数");
	else
	printf("该数是素数");
	return 0;
	 
	
}
