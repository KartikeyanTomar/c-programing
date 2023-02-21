// write a c program to find maximum between two numbers using conditional operator
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a<b)
    {
        printf("maximum number is %d",b);
    }
    else
    {
        printf("maximum number is %d",a);
    }
    return 0;
}