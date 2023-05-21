//25.	Write a C program to find LCM of two numbers.
#include<stdio.h>
int main()
{
    int n1,n2,i,lcm;
    printf("Enter the value of n1:");
    scanf("%d",&n1);
    printf("Enter the value of n2:");
    scanf("%d",&n2);
    for(i=1;i<=n1 && i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            lcm=i;
        }
    }
    printf("The LCM of %d and %d is %d",n1,n2,lcm);
    return 0;
}
