#include <stdio.h>

int main() {
    int i;

    // Print 15 stars with a blank line after each
    for(i = 1; i <= 15; i++) {
        printf("*\n\n");  // one newline for the star, one extra for space
    }

    return 0;
}
