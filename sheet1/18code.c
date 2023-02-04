//write a c program to enter p,r,t and calculate compound interest
#include<stdio.h>
int main()
{
    int p,r,t,s;
    scanf("%d%d%d",&p,&r,&t);
    s=(p*r*t)/100;
    printf("%d",s);
    return 0;
}