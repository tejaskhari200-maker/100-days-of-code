#include <stdio.h>

int main() {
    int a, b, i, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Loop from 1 to the smallest of a and b
    for (i = 1; i <= (a < b ? a : b); i++) {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    printf("HCF (GCD) of %d and %d is: %d\n", a, b, hcf);

    return 0;
}
