//write a c program to multiply two matrics
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q;
    printf("Enter the order of first matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the order of second matrix\n");
    scanf("%d%d",&p,&q);
    if(n==p)
    {
        printf("Enter the elements of first matrix\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the elements of second matrix\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        printf("The product of two matrices is\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication is not possible\n");
    }
    return 0;
}