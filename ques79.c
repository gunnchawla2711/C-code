//Perform diagonal traversal of a matrix

#include <stdio.h>

int main() {
    int rows, cols, i, j, k;

    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int A[rows][cols];

    
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDiagonal Traversal of the Matrix:\n");

    
    for (k = 0; k < cols; k++) {
        i = 0;
        j = k;
        while (i < rows && j >= 0) {
            printf("%d ", A[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    
    for (k = 1; k < rows; k++) {
        i = k;
        j = cols - 1;
        while (i < rows && j >= 0) {
            printf("%d ", A[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
