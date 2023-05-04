#include <stdio.h>
#include <math.h>
int main()
{
    int num,rem, sum, digit ;
    printf("Enter a Number : ");
    scanf("%d",&num);
    sum=0;
    digit=log10(num)+1
    while(num!=0)
    {
        rem = num % 10;
        sum = sum + pow(rem , digit);                                                                                                                                                                                                                   
    }
    if(sum==num)
    {
        printf("Its a Armstrong Number ");
    }
    else
    {
        printf("Its Not a Armstrong Number ");
    }
    return 0; 
}