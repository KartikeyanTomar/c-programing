// to create simple calculator using switch case 
#include <stdio.h>
int main()
{
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf",&first, &second);
    switch(operator)
    {
        case '+':
            printf("%.1lf", first + second);
            break;
        case '-':
            printf("%.1lf", first - second);
            break;
        case '*':
            printf(" %.1lf", first * second);
            break;
        case '/':
            printf(" %.1lf", first / second);
            break;
        
            printf("Error! operator is not correct");
    }
    return 0;
}
