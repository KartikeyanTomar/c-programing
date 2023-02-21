//write a c program to enter p,r,t and calculate compound interest
#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    float ci;
    scanf("%d %d %d",&p,&r,&t);
    ci=p*pow((1+r/100),t)-p;
    printf("compound interest is %.2f",ci);
    return 0;
}