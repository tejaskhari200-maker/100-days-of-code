#include <stdio.h>

int main() {
    int a[10][10], b[10][10], mul[10][10];
    int m, n, p, q, i, j, k;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &p, &q);

    if(n != p) {
        printf("Matrix multiplication not possible! Columns of first matrix must equal rows of second.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            mul[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            for(k = 0; k < n; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
