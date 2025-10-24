#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    // Input limit
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    // Loop through all numbers from 2 to n
    for(i = 2; i <= n; i++) {
        isPrime = 1;  // Assume i is prime

        // Check divisibility from 2 to i-1
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0;  // Not prime
                break;
            }
        }

        // Print if prime
        if(isPrime == 1)
            printf("%d ", i);
    }

    return 0;
}
