//write a c program to print all negative elements in an array 
#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]<0)
        printf("%d ",arr[i]);
    }
    return 0;
}