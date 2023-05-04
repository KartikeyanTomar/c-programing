// to find maximum between two numbers using switch case
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    switch (a>b)
    {
    case 1:
        printf("the maximum number is %d",a);
        break;
    case 0:
        printf("the maximum number is %d",b);
        break;
    }
    return 0;
}