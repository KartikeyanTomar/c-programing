//13.	Write a C program to swap first and last digits of a number.
#include<stdio.h>
int main()
{
    int n,first,last,swap;
    printf("Enter the value of n:");
    scanf("%d",&n);
    last=n%10;
    while(n>0)
    {
        first=n%10;
        n=n/10;
    }
    swap=last;
    last=first;
    first=swap;
    printf("The first digit is %d and the last digit is %d",first,last);
    return 0;
}