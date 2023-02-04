//write a c program to find power of any number x^y
#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=a;
    for(d=1;d<b;d++)
    {
        c=c*a;
    }
    printf("%d",c);
    return 0;
}