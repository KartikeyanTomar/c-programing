//write a c program to find power of any number x^y
#include<stdio.h>
#include<math.h>
int main()
/*{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=a;
    for(d=1;d<b;d++)
    {
        c=c*a;
    }
    printf("%d",c);
    return 0;
}*/
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%f",pow(a,b));
    return 0;
}