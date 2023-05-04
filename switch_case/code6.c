// to check weather a no is positive or negative or zero using switch case
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    switch (a>0)
    {
    case 1:
        printf("the number is positive");
        break;
    case 0:
        switch (a<0)
        {
        case 1:
            printf("the number is negative");
            break;
        case 0:
            printf("the number is zero");
            break;
        }
        break;
    }
    return 0;
}