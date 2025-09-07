//Write a program to find the HCF (GCD) of two numbers
#include <stdio.h>

int main() {
    int a, b, tempA, tempB;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // Euclidean algorithm
    while (tempB != 0) {
        int remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }

    printf("HCF (GCD) of %d and %d is: %d\n", a, b, tempA);

    return 0;
}
