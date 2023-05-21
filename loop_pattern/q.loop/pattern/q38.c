//38.	Write a C program to find two's complement of a binary number.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,i=0,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*pow(2,i);
        n=n/10;
        i++;
    }
    printf("The decimal equivalent is %d",sum);
    return 0;
}