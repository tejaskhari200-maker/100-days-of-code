#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum of first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
