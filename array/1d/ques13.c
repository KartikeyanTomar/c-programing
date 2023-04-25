//write a c program to count  total no of duplicate elements in an array
#include<stdio.h>
int main()
{
    int a[100],i,j,n,count=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
    }
    printf("Total no of duplicate elements in an array is:%d",count);
    return 0;
}
