//2.	Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}
