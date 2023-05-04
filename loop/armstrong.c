//armstrong by log10
#include <stdio.h>
#include <math.h>
int main()
{
    int num, on, r, n = 0, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    on = num;
    for (; on != 0; n++, on/=10);
    
    
    for (on = num; on != 0; on /= 10)
    {
        r = on % 10;
        result += pow(r, n);
    }
    // condition for Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}