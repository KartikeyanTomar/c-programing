// to check weather the given number is divisible by 5 and 11 or not
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a%5==0 && a%11==0)
    {
        printf("the no. is divisible by 5 and 11");
    }
    else
    {
        printf("the no. is not divisible by 5 and 11");
    }
    
    return 0;
}