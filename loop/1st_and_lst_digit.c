//print first and the last digit
#include <stdio.h>
int main()
{
    int n, first, last;
    scanf("%d", &n);
    last = n % 10;
    while (n >= 10)
    {
        n = n / 10;
    }
    first = n;
    printf("%d %d", first, last);
    return 0;
}