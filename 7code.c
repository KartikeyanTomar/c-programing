//write a c program to enter length in centimeter and convert it into meter and kilometer
#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f",&a);
    b=a/100;
    c=a/100000;
    printf("%f",b);
    printf("%f",c);
    return 0;
}