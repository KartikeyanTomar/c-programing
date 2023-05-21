//53. Write a C program to print the given number patterns.
// 1
// 12
// 123
// 1234
// 12345
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
            printf("%d",j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
