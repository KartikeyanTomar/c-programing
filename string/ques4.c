//write a c program to print the string without duplicate characters
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter the string\n");
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        for(int j=i+1;j<strlen(str);j++)
        {
            if(str[i]==str[j])
            {
                for(int k=j;k<strlen(str);k++)
                {
                    str[k]=str[k+1];
                }
            }
        }
    }
    printf("the string is %s",str);
    return 0;
}