//Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // Store original number for display

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;         // Get last digit
        reversed = reversed * 10 + remainder; // Append it to reversed number
        num /= 10;                     // Remove last digit
    }

    // Print the result
    printf("Reverse of %d is: %d\n", original, reversed);

    return 0;
}
