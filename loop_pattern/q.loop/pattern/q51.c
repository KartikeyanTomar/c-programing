//51.	Write a C program to print Pascal triangle upto n rows.
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