#include <stdio.h>

int main() {
    long long binary, onesComplement = 0;
    int digit, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        digit = binary % 10;
        if (digit == 0)
            onesComplement += 1 * place;
        else
            onesComplement += 0 * place;
        binary /= 10;
        place *= 10;
    }

    printf("1's Complement = %lld\n", onesComplement);
    return 0;
}
