//Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n;
    long long factorial = 1; // Use long long for large factorials

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for(int i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Print result
        printf("Factorial of %d is: %lld\n", n, factorial);
    }

    return 0;
}
