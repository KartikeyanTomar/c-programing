//15.	Write a C program to calculate product of digits of a number.
#include<stdio.h>
int main()
{
    int n,product=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n>0)
    {
        product=product*(n%10);
        n=n/10;
    }
    printf("The product of digits is %d",product);
    return 0;
}