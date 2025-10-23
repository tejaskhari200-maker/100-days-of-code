#include <stdio.h>

int main() {
    int i, j;
    int n = 5;

    for (i = n; i >= 1; i--) {        // outer loop for rows
        for (j = 1; j <= i; j++) {    // inner loop for stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
