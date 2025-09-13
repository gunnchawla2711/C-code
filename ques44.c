//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    
    printf("Enter number of terms: ");
    scanf("%d", &n);

    
    for (int k = 1; k <= n; k++) {
        sum += (double)(2 * k - 1) / (2 * k);
    }

    
    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
