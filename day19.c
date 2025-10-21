#include <stdio.h>

int main() {
    int a, b, max, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;
    lcm = max;

    // Find the first number divisible by both a and b
    while(1) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("LCM of %d and %d is: %d\n", a, b, lcm);
            break;
        }
        lcm++;
    }

    return 0;
}
