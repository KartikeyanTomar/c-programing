// sum of all digits of a number
#include <stdio.h>
int main()
{
    int n, sum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    printf("Sum = %d", sum);
    return 0;
}