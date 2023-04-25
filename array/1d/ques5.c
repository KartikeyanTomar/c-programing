// write a c program to find second largest no in an array 
#include<stdio.h>
int main()
{
    int arr[5],max;
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);

    }
    max = arr[0];
    for(int i=0;i<=4;i++)
    {
        if(arr[i]>max)
        {    max = arr[i];}
    }   
    for(int i=0;i<=4;i++)
            {
                if(arr[i]==max)
                arr[i]=0;
            } 
    max = arr[0];
    for(int i=0;i<=4;i++)
    {
        if(arr[i]>max)
        {    max = arr[i];}
    }   
        printf("%d",max);
    return 0;
}