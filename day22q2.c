#include <stdio.h>

int main() {
    int n, i;
    float numerator = 1, denominator = 2, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;   // Odd numbers: 1, 3, 5, 7...
        denominator += 2; // Even numbers: 2, 4, 6, 8...
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}
