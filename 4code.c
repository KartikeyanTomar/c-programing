// write a c program to enter length and breadth of a rectangle and print its perimeter
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=2*(a+b);
    printf("%d",c);
    return 0;
}