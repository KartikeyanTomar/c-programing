//write a c program to find determinant of a matrix.
#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,det=0;
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
    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            det=det+(a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3]));
        }
        printf("The determinant of matrix is %d",det);
    }
    else
    {
        printf("The matrix is not a square matrix");
    }
    return 0;
}