// leap year or not using if else
#include <stdio.h>
   // by if else
  int main()
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