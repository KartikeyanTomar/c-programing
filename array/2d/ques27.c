 //write a c program to check weather a given matrices are equal or not

#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,m,n,p,q,flag=0;
    printf("Enter the order of first matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the order of second matrix\n");
    scanf("%d%d",&p,&q);
    if(m==p&&n==q)
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
            for(j=0;j<n;j++)
            {
                if(a[i][j]!=b[i][j])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            printf("The given matrices are equal\n");
        }
        else
        {
            printf("The given matrices are not equal\n");
        }
    }
    else
    {
        printf("The given matrices are not equal\n");
    }
    return 0;
}