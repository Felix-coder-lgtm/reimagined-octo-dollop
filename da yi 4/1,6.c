#include<stdio.h>
int main()
{
	int i=1,m=0,n=0;
	for(;i<=9;i++)
	{
		n=n*10+i;
		m=m+n;
	}
	printf("m=%d",m);
	return 0;
}
