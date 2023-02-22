// write a c program to check weather character is an alphabet or not using condition operator.
# include <stdio.h>
int main()
{
    char a,b;
    scanf("%c", &a);
    b=("%d",a);
    (b>=65 && b<=90) || (b>=97 && b<=122) ? printf("It is an alphabet") : printf("It is not an alphabet");
    return 0;
}




/*{
    by if else
    
    int a,b;
    scanf("%c",&a);
    b=("%d",a);
    if (b>=65 && b<=90 || b>=97 && b<=122)
    {
        printf("alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
    return 0;
}
*/
