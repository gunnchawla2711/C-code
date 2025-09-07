//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;
    long long product = 1; // Use long long to handle large products

    // Input the value of n
    printf("Enter a positive number n: ");
    scanf("%d", &n);

    // Calculate product of even numbers from 1 to n
    for(int i = 2; i <= n; i += 2) {
        product *= i;
    }

    // Check if there are no even numbers
    if (n < 2) {
        printf("No even numbers in the range 1 to %d\n", n);
    } else {
        printf("Product of even numbers from 1 to %d is: %lld\n", n, product);
    }

    return 0;
}
