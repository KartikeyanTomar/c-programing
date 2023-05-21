//6.	Write a C program to find sum of all natural numbers between 1 to n.
#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of all natural numbers between 1 to %d is %d",n,sum);
    return 0;
}