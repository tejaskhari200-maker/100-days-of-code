#include <stdio.h>

int main() {
    int i, j, space;

    // Upper half of the pyramid
    for(i = 1; i <= 4; i++) {
        for(space = i; space < 4; space++) {
            printf(" ");  // print leading spaces
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pyramid
    for(i = 3; i >= 1; i--) {
        for(space = 4; space > i; space--) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
