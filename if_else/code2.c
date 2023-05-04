// maximum no of three

# include <stdio.h>

int main()

// By if else
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
}