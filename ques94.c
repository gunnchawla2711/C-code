//Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[50];
    int maxLen = 0, i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    while (1) {
        char word[50];
        j = 0;

        
        while (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i++];
        }
        word[j] = '\0'; 

        
        if (strlen(word) > maxLen) {
            maxLen = strlen(word);
            strcpy(longest, word);
        }

        if (str[i] == '\0')
            break;

        i++; 
    }

    printf("The longest word is: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
