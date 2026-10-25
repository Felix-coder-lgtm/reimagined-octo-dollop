#include<stdio.h>
int main()
{
	int i=7,x=0;
 for(i=0;i<10;i++)

	{
	if(i%2==0)
	     continue;//continue的作用是跳过本次循环剩余代码，直接进入下一次循环 
	     x++;
}
  printf("%d",x);
  return 0;
}
