//write a c program to copy all elements from an array to another array




#include<stdio.h>
int main()
{
    int array[5],rajat[5];
    for (int i=0;i<=4;i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i=0;i<=4;i++)
    {
        rajat[i]=array[i];

        printf("%d ",array[i]);
    }
    printf("\n");
    
    for (int i=0;i<=4;i++)
    {
        printf("%d ",rajat[i]);
    }
    return 0;
}