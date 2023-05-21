//33.	Write a C program to print all Perfect numbers between 1 to n.
#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}