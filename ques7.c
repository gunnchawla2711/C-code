//Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Swapping without third variable
    a = a + b;  // step 1
    b = a - b;  // step 2
    a = a - b;  // step 3

    // Output
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}