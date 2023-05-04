//write a c program to find sum or minor diagonal elements of two matrices
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,r,c,sum=0;
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of first matrix: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);	
        }
    }
    printf("Enter the elements of second matrix: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);	
        }
    }
    printf("The first matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);	
        }
        printf("\n");
    }
    printf("The second matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);	
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i+j==r-1)
            {
                sum=sum+a[i][j]+b[i][j];
            }
        }
    }
    printf("The sum of minor diagonal elements of matrix is: %d",sum);
    return 0;
}