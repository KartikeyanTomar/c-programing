//23.	Write a C program to calculate factorial of a number.
#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}