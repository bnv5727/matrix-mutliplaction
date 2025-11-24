#include <stdio.h>

int main() {
    int n;

    // Input matrix size
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print original matrix
    printf("\nOriginal Matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print lower triangular matrix
    printf("\nLower Triangular Matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (j > i)
                printf("0 ");   // elements above diagonal replaced with 0
            else
                printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}