#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 0) {
        printf("Invalid input. Units consumed must be positive.\n");
        return 1;
    }

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        // First 100 units at ₹5/unit
        // Remaining (units - 100) at ₹7/unit
        bill = 100 * 5 + (units - 100) * 7;
    } else if (units <= 300) {
        // First 100 units at ₹5/unit
        // Next 100 units at ₹7/unit
        // Remaining (units - 200) at ₹10/unit
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    } else {
        // First 100 units at ₹5/unit
        // Next 100 units at ₹7/unit
        // Next 100 units at ₹10/unit
        // Remaining (units - 300) at ₹12/unit
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    }

    printf("Electricity Bill: ₹%d\n", bill);

    return 0;
}
