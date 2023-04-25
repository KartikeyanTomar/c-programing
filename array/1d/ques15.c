//write a c program to merge two arrays to third array 
#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],i,j,n1,n2;
    printf("Enter the size of first array:");
    scanf("%d",&n1);
    printf("Enter the elements of first array:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of second array:");
    scanf("%d",&n2);
    printf("Enter the elements of second array:");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<n2;i++)
    {
        c[i+n1]=b[i];
    }
    printf("The elements of third array are:");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}