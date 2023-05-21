//Write a C program to print the given star patterns
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}