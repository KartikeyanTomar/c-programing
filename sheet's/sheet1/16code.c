//write a c program to enter marks of five subjects and calculate total, average and percentage
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    float h;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    f=a+b+c+d+e;
    g=f/5;
    h=100*f/500;
    printf("total is %d \n",f);
    printf("average is %d \n",g);
    printf("percentage is %.2f%%",h);
    return 0;
}