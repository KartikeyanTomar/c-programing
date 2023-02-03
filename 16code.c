//write a c program to enter marks of five subjects and calculate total, average and percentage
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    f=a+b+c+d+e;
    g=f/5;
    printf("%d",g);
    return 0;
}