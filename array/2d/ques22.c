//write a c program to right rotate an array
#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of times you want to rotate the array: ");
    scanf("%d",&j);
    while(j>0)
    {
        temp=arr[n-1];
        for(i=n-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        j--;
    }
    printf("The array after right rotation is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}