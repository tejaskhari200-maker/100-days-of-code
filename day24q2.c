#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {         // outer loop for rows
        for (j = 1; j <= i; j++) {     // inner loop for numbers
            printf("%d", j);
        }
        printf("\n");                  // move to next line
    }

    return 0;
}
