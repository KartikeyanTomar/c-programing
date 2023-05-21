//17.	Write a C program to check whether a number is palindrome or not.
#include<stdio.h> 
int main()
{
    int n,rev=0,rem,temp;
    printf("Enter the value of n:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not palindrome");
    }
    return 0;
}