#include <stdio.h>
int main()
{
    int n , i , t1=0 , t2=1 , nextterm;
    printf("Enter a Number : ");
    scanf("%d",&n);
    printf("Fabbonaci Series : ");
    for (i=1;i<=n;++i)
    {
        printf("%d ",t1);
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
return 0;
}