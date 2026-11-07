#include<stdio.h>
int main(void)
{int num,digit,ori=0,rev;
scanf("%d",&num);
rev=num;
if(num < 0)
{
printf("请输入一个正整数:");
printf("错误:请输入一个正整数!");
return 1;//非正常退出
}
printf("数字%d逆序输出为:",num);
if (num == 0) 
{printf("0 \n");
return 0;
}
while(num>0)
{
digit=num % 10;//获取最后一位数等
printf("%d ",digit);//输出该数字
ori=ori*10+digit; 
num=num/10;//去掉最后一位
}
printf("ori=%d\n",ori);
if(rev==ori)
printf("该数字是回文\n");
else
printf("该数字不是回文\n");
return 0;}

