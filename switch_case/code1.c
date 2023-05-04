// c program to print day of week name using switch case 
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number of the day of the week");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf(" tuesday");
        break;
    case 3:
        printf(" wednesday");
        break;
    case 4:
        printf(" thursday");
        break;
    case 5:
        printf(" friday");
        break;
    case 6:
        printf(" saturday");
        break;
    case 7:
        printf(" sunday");
        break;
    default:
        printf("the number is not in the range of 1 to 7");
        break;
    }
    return 0;
}