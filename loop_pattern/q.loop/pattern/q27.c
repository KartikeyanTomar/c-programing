//27.	Write a C program to print all Prime numbers between 1 to n.
#include<stdio.h>
int main()
{
    int n,i,j,count;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}