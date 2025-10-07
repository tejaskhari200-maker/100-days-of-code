#include <stdio.h>

int main() {
    int lateDays;
    int fine = 0;

    printf("Enter the number of days late: ");
    scanf("%d", &lateDays);

    if (lateDays <= 0) {
        printf("No fine. Book returned on time.\n");
    } else if (lateDays <= 5) {
        fine = lateDays * 2;
        printf("Fine: ₹%d\n", fine);
    } else if (lateDays <= 10) {
        // First 5 days: 5 * 2 = 10
        // Remaining days: (lateDays - 5) * 4
        fine = 5 * 2 + (lateDays - 5) * 4;
        printf("Fine: ₹%d\n", fine);
    } else if (lateDays <= 30) {
        // First 5 days: 5 * 2 = 10
        // Next 5 days: 5 * 4 = 20
        // Remaining days: (lateDays - 10) * 6
        fine = 5 * 2 + 5 * 4 + (lateDays - 10) * 6;
        printf("Fine: ₹%d\n", fine);
    } else {
        printf("Membership Cancelled due to late return exceeding 30 days.\n");
    }

    return 0;
}
