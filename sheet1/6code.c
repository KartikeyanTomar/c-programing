//write a c program to enter radius of a circle and find its diameter, circumference and area
#include<stdio.h>
int main()
{
    int radius,diameter,circumference,area;
    scanf("%d",&radius);
    diameter=2*radius;
    circumference=2*3.14*radius;
    area=3.14*radius*radius;
    printf("the diameter is %d \n",diameter);
    printf("the circumference is %d \n",circumference);
    printf("the area is %d \n",area);
    return 0;
}