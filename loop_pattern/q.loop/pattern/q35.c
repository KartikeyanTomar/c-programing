//35.	Write a C program to print all Strong numbers between 1 to n.
#include<stdio.h>
int main()
{
    int n,i,j,sum=0,rem,fact;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        j=i;
        while(j!=0)
        {
            rem=j%10;
            fact=1;
            for(int k=1;k<=rem;k++)
            {
                fact=fact*k;
            }
            sum=sum+fact;
            j=j/10;
        }
        if(sum==i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}