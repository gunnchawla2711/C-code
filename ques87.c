//Count spaces, digits, and special characters in a string.

#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[200];
    int i = 0, spaces = 0, digits = 0, special = 0;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;
        }
        else if (isdigit(str[i])) {
            digits++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || 
                 (str[i] >= 'A' && str[i] <= 'Z')) {
            
        }
        else if (str[i] != '\n') {  
            special++;  
        }
        i++;
    }

    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);

    return 0;
}
