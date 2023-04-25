// write a c program to count total no.of even and odd elements in array

#include<stdio.h>
int main()
{
    int rajat[5];
    for(int i=0;i<=4;i++)
    scanf("%d",&rajat[i]);

    int a=0,b=0;
    for(int i=0;i<=4;i++)
    {
        if (rajat[i]%2==0)
        a+=1;
        else
        b+=1;
    }
    printf("Total number of even %d\n",a);
    printf("Total number of odd %d",b);
    return 0;
}