#include <stdio.h>

int main() {
    int i, j;
    int n = 5;

    for (i = n; i >= 1; i--) {        // outer loop for rows
        for (j = i; j <= n; j++) {    // inner loop for numbers
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
