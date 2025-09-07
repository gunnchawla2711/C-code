//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n, sum;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Formula for sum of first n natural numbers
    sum = n * (n + 1) / 2;

    // Output
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}