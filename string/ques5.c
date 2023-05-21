//write a c program to check frequency of each character in a string super important question
#include <stdio.h>

#define MAX_SIZE 100

void countFrequency(char *str)
{
    int freq[26] = {0};  
    
    // Iterate over the string
    for (int i = 0; str[i] != '\0'; i++) {

        freq[str[i] - 'a']++;
    }

    printf("Character\tFrequency\n");
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c\t\t%d\n", i + 'a', freq[i]);
        }
    }
}

int main() {
    char str[MAX_SIZE];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Frequency of characters:\n");
    countFrequency(str);

    return 0;
}