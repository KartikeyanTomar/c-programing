// write a c program to add two matrics
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the size of matrix: ");
    scanf("%d",&n);
    int arr1[n][n],arr2[n][n],arr3[n][n];
    printf("Enter the elements of first matrix: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the elements of second matrix: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The sum of the two matrix is:\n ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}