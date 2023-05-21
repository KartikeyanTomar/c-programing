//21.	Write a C program to find power of a number using for loop.
#include<stdio.h>
int main()
{
    int n,power,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of power:");
    scanf("%d",&power);
    for(i=1;i<=power;i++)
    {
        n=n*n;
    }
    printf("The value of n^power is %d",n);
    return 0;
}