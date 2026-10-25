#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	if(x>=0){
	 if(x<20)
	 y=3*x+2;
	 else 
	 y=5*x*x-3;}
	 else{
	 y=x;}
	 printf("%d\n",y);
	 return 0;
	 
}
