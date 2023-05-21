//write a c program to print the string with greater length
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("enter the string1\n");
    gets(str1);
    printf("enter the string2\n");
    gets(str2);
    if(strlen(str1)>strlen(str2))
    {
        printf("string1 is greater than string 2\n %s",str1);
    }
    else
    {
        printf("string2 is greater than string 1\n %s",str2);
    }
    return 0;
}