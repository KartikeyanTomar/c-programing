//31.	Write a C program to print all Armstrong numbers between 1 to n.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,count,sum=0,rem;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        j=i;
        while(j!=0)
        {
            count++;
            j=j/10;
        }
        j=i;
        sum=0;
        while(j!=0)
        {
            rem=j%10;
            sum=sum+pow(rem,count);
            j=j/10;
        }
        if(sum==i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}