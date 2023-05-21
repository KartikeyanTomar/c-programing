//29.	Write a C program to find all prime factors of a number.
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
            if(n%i==0)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}