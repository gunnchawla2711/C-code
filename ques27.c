//Write a program to print the sum of the first n odd numbers

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter the number of odd numbers to sum: ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for(int i = 1; i <= 2*n; i += 2) {
        sum += i;
    }

    // Print the result
    printf("Sum of first %d odd numbers is: %d\n", n, sum);

    return 0;
}