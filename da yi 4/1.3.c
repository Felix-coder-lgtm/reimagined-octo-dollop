#include<stdio.h>
#include<stdlib.h>//srand,rand函数所属的头文件 
#include<time.h>//time函数所属头文件 
int main()
{
	int n,x,count;
	count=0;//初始化已猜次数为0 
	srand(time(NULL));//用系统时间作为 随机数种子，使程序每次运行是生成的随机数不同 
	n=rand()%101;//利用rand函数生成【0-100】闭区间的随机数作为目标数 
	do
	{
		scanf("%d",&x);
		count++;//次数加1 
		if(x>n)
		printf("大了，请再猜一次！\n");
		else
		if(x<n)
		printf("小了，请再猜一次！\n");	 
	}while(count<10&&x!=n);//
	if(x=n)
	{printf("恭喜猜中");
	printf("得分：%d分，次数：%d",100-(count-1)*10,count);
	}
	else
	printf("很遗憾10次未猜中，得0分，再接再励！");
	return 0;
	 
	 
}
