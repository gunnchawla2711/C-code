//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num;
    int binary[32]; // Array to store binary digits
    int i = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
    } else {
        int n = num; // Store original number for display

        // Convert to binary
        while (num > 0) {
            binary[i] = num % 2; // Store remainder
            num /= 2;            // Divide by 2
            i++;
        }

        // Print binary in reverse order
        printf("Binary of %d is: ", n);
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
        printf("\n");
    }

    return 0;
}
