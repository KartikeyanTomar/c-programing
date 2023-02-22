// write a c program to check weather year is leap year or not using conditional operator.
#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    year % 400 == 0 || year % 4 == 0 ? printf("It is a leap year") : printf("It is not a leap year");
    return 0;
}





/*
    by if else
  {
    int a;
    scanf("%d",&a);
    if (a%4==0 || a%400)
    {
        printf("the year is leap year");
    }
    else if (a%100==0)
    {
        printf("the year is not leap year");
    }
    else
    {
        printf("the year is not leap year");
    }
    
        return 0;
    
}
*/
