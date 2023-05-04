//strong number
#include <stdio.h>
int main()
{
    int n, sum = 0, remainder, temp;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        remainder = n % 10;
        sum += remainder * remainder * remainder;
        n /= 10;
    }
    if (sum == temp)
    {
        printf("%d is a strong number.", temp);
    }
    else
    {
        printf("%d is not a strong number.", temp);
    }
    return 0;
}