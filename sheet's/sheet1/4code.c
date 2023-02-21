// write a c program to enter length and breadth of a rectangle and print its perimeter
#include<stdio.h>
int main()
{
    int length,breadth,perimeter;
    scanf("%d%d",&length,&breadth);
    perimeter=2*(length+breadth);
    printf("%d",perimeter);
    return 0;
}