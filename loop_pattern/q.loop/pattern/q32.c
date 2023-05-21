//32.	Write a C program to check whether a number is Perfect number or not.
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("The number is perfect");
    }
    else
    {
        printf("The number is not perfect");
    }
    return 0;
}