//Count frequency of a given character in a string

#include <stdio.h>

int main() {
    char str[200], ch;
    int i = 0, count = 0;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    printf("Enter the character to find frequency of: ");
    scanf("%c", &ch);

    
    while (str[i] != '\0') {
        if (str[i] == ch)
            count++;
        i++;
    }

    printf("The character '%c' appears %d time(s) in the string.\n", ch, count);

    return 0;
}
