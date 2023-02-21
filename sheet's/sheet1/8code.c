//write a c program to enter temperature in celsius and convert it into fahrenheit
#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("%f",fahrenheit);
    return 0;
}