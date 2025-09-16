//Write a program to print the following pattern

#include <stdio.h>

int main() {
    int i, j;
    int stars[] = {1, 3, 5, 7, 3, 1};
    int rows = sizeof(stars) / sizeof(stars[0]);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < stars[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
