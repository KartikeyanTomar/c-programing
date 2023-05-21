//11.	Write a C program to find first and last digit of a number.
#include<stdio.h>
int main()
{
    int n,first,last;
    printf("Enter the value of n:");
    scanf("%d",&n);
    last=n%10;
    while(n>0)
    {
        first=n%10;
        n=n/10;
    }
    printf("The first digit is %d and the last digit is %d",first,last);
    return 0;
}
