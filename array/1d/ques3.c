// write a c program to find sum of all array elements 
#include<stdio.h>
int main()
{
    int arr[5],sum=0 ;
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("%d",sum);
    return 0;
}
