//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
#include <math.h>


int isPrime(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
