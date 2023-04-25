// write  a c program to count total number of negative elements in an aray
#include<stdio.h>
int main()
{
    int rajat[5];
    for(int i=0;i<=4;i++)
    scanf("%d",&rajat[i]);

    int a=0;
    for(int i=0;i<=4;i++)
    {
        if (rajat[i]<0)
        a+=1;
    }
    printf("Total number of negative %d",a);
    return 0;
}