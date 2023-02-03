//write a c program to enter radius of a circle and find its diameter, circumference and area
#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=2*a;
    c=2*3.14*a;
    d=3.14*a*a;
    printf("the diameter is %d \n",b);
    printf("the circumference is %d \n",c);
    printf("the area is %d \n",d);
    return 0;
}