#include <stdio.h>

int main() {
    int i, j;

    // Upper half (1 to 7 stars)
    for(i = 1; i <= 7; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (6 down to 1 stars)
    for(i = 6; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
