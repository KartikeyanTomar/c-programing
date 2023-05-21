//28.	Write a C program to find sum of all prime numbers between 1 to n.
#include<stdio.h>
int main()
{
    int n,i,j,count,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            sum=sum+i;
        }
    }
    printf("The sum of all prime numbers between 1 to %d is %d",n,sum);
    return 0;
}