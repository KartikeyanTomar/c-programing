//30.	Write a C program to check whether a number is Armstrong number or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,count=0,sum=0,rem;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
        count++;
        temp=temp/10;
    }
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+pow(rem,count);
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("The number is armstrong");
    }
    else
    {
        printf("The number is not armstrong");
    }
    return 0;
}