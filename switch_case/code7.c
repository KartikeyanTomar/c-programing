// to find roots of a quadratic equation using switch case
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    printf("enter the coefficients of the quadratic equation");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    switch (d>0)
    {
    case 1:
        printf("the roots are real and distinct");
        printf("the roots are %f and %f",-b+sqrt(d)/2*a,-b-sqrt(d)/2*a);
        break;
    case 0:
        printf("the roots are real and equal");
        printf("the roots are %f and %f",-b/2*a,-b/2*a);
        break;
    default:
        printf("the roots are imaginary");
        break;
    }
    return 0;
}