//write a c program to find maximum and minimum value in an array.
#include<stdio.h>
int main()
{
    int arr[5],max,min;
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(int i=0;i<=4;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("max = %d\n",max);
    printf("min = %d",min);
    return 0;
}    
