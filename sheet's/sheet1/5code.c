// write a c program to enter length and breadth of a rectangle and print its area
#include<stdio.h>
int main()
{
    int length,breath,area;
    scanf("%d%d",&length,&breath);
    area=length*breath;
    printf("%d",area);
    return 0;
}