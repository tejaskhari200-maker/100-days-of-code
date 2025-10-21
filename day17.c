#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, digits = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    // Compute sum of each digit raised to the power 'digits'
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    // Check if Armstrong
    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is NOT an Armstrong number.\n", original);

    return 0;
}
