// negative positive or zero by if else

#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if (a>0)
    {
        printf("the no. is positive");
    }
    else if (a<0)
    {
        printf("the no. is negative");
    }
    else
    {
        printf("the no. is zero");
    }
    
    return 0;
}