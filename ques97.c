//Print the initials of a name

#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int i = 0;

   
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

   
    name[strcspn(name, "\n")] = '\0';

    printf("Initials: ");

    
    if (name[0] != ' ')
        printf("%c", name[0]);

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c", name[i]);
    }

    printf("\n");

    return 0;
}
