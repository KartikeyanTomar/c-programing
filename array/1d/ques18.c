//write a c program to search an element in an array
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
    printf("Enter the element to be searched:");
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(a[i]==j)
        {
            printf("The element is found at position %d",i+1);
            break;
        }
    }
    if(i==n)
    {
        printf("The element is not found");
    }
    return 0;
}