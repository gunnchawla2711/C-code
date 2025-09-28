//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int n, i, j, k, isDistinct = 1;

    
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int A[n][n], diag[n];

    
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    for (i = 0; i < n; i++) {
        diag[i] = A[i][i];
    }

    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) break;
    }

    
    if (isDistinct)
        printf("The diagonal elements are distinct.\n");
    else
        printf("The diagonal elements are NOT distinct.\n");

    return 0;
}
