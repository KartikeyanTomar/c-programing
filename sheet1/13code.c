//write a c program to enter two angles of a triangle and find the third angle
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=180-(a+b);
    printf("%d",c);
    return 0;
}