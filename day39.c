#include <stdio.h>

int main() {
    int a[10][10], rows, cols, i, j;
    int diag[10], count = 0, isDistinct = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if(rows != cols) {
        printf("Not a square matrix, cannot check diagonal elements.\n");
        return 0;
    }

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Store diagonal elements
    for(i = 0; i < rows; i++) {
        diag[i] = a[i][i];
    }

    // Check if diagonal elements are distinct
    for(i = 0; i < rows; i++) {
        for(j = i + 1; j < rows; j++) {
            if(diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
    }

    if(isDistinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}
