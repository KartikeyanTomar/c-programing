//write a c program to enterany number and calculate its square root
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/2;
    c=(b+a/b)/2;
    printf("%d",c);
    return 0;
}