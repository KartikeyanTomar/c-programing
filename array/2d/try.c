//write a c program to print a matrics
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the size of matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the elements of matrix: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}