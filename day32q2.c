#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};  // For digits 0–9

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0)
        num = -num;

    // Count digits
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find most frequent digit
    int maxCount = 0, mostFrequentDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs most times is: %d\n", mostFrequentDigit);
    printf("It occurs %d times.\n", maxCount);

    return 0;
}
