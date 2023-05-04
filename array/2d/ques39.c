//write a c program to check sparse matrix.
#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,count=0;
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
            if(a[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count>((r*c)/2))
    {
        printf("The matrix is sparse matrix");
    }
    else
    {
        printf("The matrix is not sparse matrix");
    }
    return 0;
}