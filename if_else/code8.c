// to check weather a input character is a vowel or consonant
#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        printf("the character is a vowel");
    }
    else
    {
        printf("the character is a consonant");
    }
    
    return 0;
}