//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    int len, i, lastSpace = -1;

    
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

   
    name[strcspn(name, "\n")] = '\0';
    len = strlen(name);

    
    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpace = i;
            break;
        }
    }

    printf("Formatted Name: ");

    for (i = 0; i < len; i++) {
        if (i == 0 && name[i] != ' ') {
            printf("%c.", toupper(name[i]));
        } else if (name[i - 1] == ' ' && i < lastSpace) {
            printf("%c.", toupper(name[i]));
        }
    }

    
    if (lastSpace != -1) {
        printf(" %s\n", name + lastSpace + 1);
    } else {
        
        printf("%s\n", name);
    }

    return 0;
}
