//palindrome
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;
    int label = 0;
    printf("Enter string: ");
    gets(str);
    len = strlen(str);
    for(i=0;i < len ;i++)
    {
        if(str[i] != str[len-i-1])
        {
            label = 1;
            break;
        }
    }
    if (label) 
    {
        printf("%s is not a palindrome", str);
    }    
    else 
    {
        printf("%s is a palindrome", str);
    }
    return 0;
}
