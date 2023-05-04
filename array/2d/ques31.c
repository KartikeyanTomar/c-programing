//write a c prograam to interchange diagonals of a matrix.
#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,temp;
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
            if(i==j)
            {
                temp=a[i][j];
                a[i][j]=a[i][c-1-i];
                a[i][c-1-i]=temp;
            }
        }
    }
    printf("The matrix after interchanging diagonals is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);	
        }
        printf("\n");
    }
    return 0;
}