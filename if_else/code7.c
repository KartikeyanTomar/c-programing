// to check weather a character or not by else if 
#include<stdio.h>
 
int main()
{
    //by if else
    
    char a;
    scanf("%c",&a);
    if (a>='a' && a<='z' || a>='A' && a<='Z')
    {
        printf("the character is a character");
    }
    else
    {
        printf("the character is not a character");
    }
 
        return 0;
}