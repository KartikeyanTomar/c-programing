//34.	Write a C program to check whether a number is Strong number or not.
#include<stdio.h>
int main()
{
    int n,i,sum=0,rem,fact;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("The number is strong");
    }
    else
    {
        printf("The number is not strong");
    }
    return 0;
}
