//write a c program to find sum of lower triangular matrix.
#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,sum=0;
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of matrix: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);	
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);	
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i>j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("The sum of lower triangular matrix is %d",sum);
    return 0;
}