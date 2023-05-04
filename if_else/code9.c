//to check weather the input is character ,digit or special character
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
    else if (a>='0' && a<='9')
    {
        printf("the character is a digit");
    }
    else
    {
        printf("the character is a special character");
    }
 
        return 0;
}