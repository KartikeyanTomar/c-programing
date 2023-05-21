//write a c program to convert string from lower case to upper case and vice versa
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter the string\n");
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    printf("the string is %s",str);
    return 0;
}