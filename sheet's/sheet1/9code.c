//write a c program to enter temprature in fahrenheit and convert it into celsius
#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("%f",celsius);
    return 0;
}