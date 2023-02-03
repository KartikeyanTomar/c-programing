//write a c program to enter temprature in fahrenheit and convert it into celsius
#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f",&a);
    b=(a-32)*5/9;
    printf("%f",b);
    return 0;
}