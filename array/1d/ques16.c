//write a c program to find reverse of an array 
#include<stdio.h>
int main()
{
    int a[100],i,j,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}