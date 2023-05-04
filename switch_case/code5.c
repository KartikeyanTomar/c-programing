// even or odd using switch case 
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    switch (a%2)
    {
    case 0:
        printf("the number is even");
        break;
    case 1:
        printf("the number is odd");
        break;
    }
    return 0;
}