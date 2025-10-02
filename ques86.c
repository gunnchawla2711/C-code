//Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, j, isPalindrome = 1;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    
    len = strlen(str);

    
    i = 0;
    j = len - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
