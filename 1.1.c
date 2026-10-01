#include<stdio.h>
int main( )
{
    //待排序数组
    int arr[8]={5,3,8,4,2,7,1,6};
    //数组长度
    int n=8;
    int i,j,temp;
    //冒泡核心：外层控制一共多少趟
    for(i=0;i<n-1;i++)
    {
        //内层：每一趟相邻两个数比较，大的往后排
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //交换两个变量
                temp=arr[j] ;
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //输出排序后的结果
    printf ("排序结果:") ;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
