// maximum no of two


# include<stdio.h>

int main()
{
    //by if else
    
    int a, b;
    scanf("%d%d", &a, &b);
    if (a<b)
    {
        printf("maximum number is %d",b);
    }
    else
    {
        printf("maximum number is %d",a);
    }
    return 0;
}