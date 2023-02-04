//write a c program to enter two numbers and perform all arithmetic operations
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("the sum is %d \n",c);
    printf("the difference is %d \n",d);
    printf("the product is %d \n",e);
    printf("the quotient is %d \n",f);
    return 0;
}