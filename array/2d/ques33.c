//write a program to find lower trangular matrix
#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,flag=0;
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
            if(i<j)
            {
                if(a[i][j]!=0)
                {
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==0)
    {
        printf("The matrix is lower triangular matrix");
    }
    else
    {
        printf("The matrix is not lower triangular matrix");
    }
    return 0;
}