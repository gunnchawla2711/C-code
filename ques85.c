//Reverse a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, j;
    char temp;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    
    len = strlen(str);

    
    i = 0;
    j = len - 1;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
