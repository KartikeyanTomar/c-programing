// write a c program to find maximum between three numbers using conditional operator.
# include <stdio.h>
# include <math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    a>b && a>c ? printf("Maximum is %d",a): b>c ? printf("Maximum is %d",b) : printf("Maximum is %d",c);
    return 0;
}
---------------------------------------------------------------------------------------------------
/*
By if else
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("max no. is %d",a);
    }
    else if (b>a && b>c)
    {
        printf("max no. is %d",b);
    }
    else if (c>a && c>b)
    {
        printf("max no. is %d",c);
    }
    return 0 ;
}*/
