//write a c program to convert days into years, weeks and days.
#include<stdio.h>
int main()
{
    int tdays,year,c,week,days;
    scanf("%d",&tdays);
    year=tdays/365;
    c=tdays%365;
    week=c/7;
    days=c%7;
    printf("%d",year);
    printf("%d",week);
    printf("%d",days);
    return 0;
}