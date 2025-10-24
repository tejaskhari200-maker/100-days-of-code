#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows (5 to 1)
    for(i = 5; i >= 1; i--) {
        
        // Inner loop for numbers (from i to 5)
        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }
        
        // Move to next line after each row
        printf("\n");
    }

    return 0;
}
