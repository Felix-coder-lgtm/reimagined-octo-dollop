#include<stdio.h>
int main()
{
	int r,count=0;
	float area=0,Pi=3.14159;
	for(r=1;r<=10;r++)
	{
		area=r*r*Pi;
		count++;
		if(area>=100)
		break;//Ìø³ö¸ÃÑ­»· 
		}
		printf("count=%d,area=%f",count,area);
		return 0;
	
	
	
}
