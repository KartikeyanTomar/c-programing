//write a c program to find sum of each row and column of a matrix
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
            sum=sum+a[i][j];
        }
        printf("The sum of %d row is: %d\n",i+1,sum);
        sum=0;
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+a[j][i];
        }
        printf("The sum of %d column is: %d\n",i+1,sum);
        sum=0;
    }
    return 0;
}