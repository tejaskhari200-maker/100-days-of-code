#include <stdio.h>
#include <string.h>

int main() {
    char date[11];
    char day[3], month[3], year[5];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    int m = atoi(month);
    if (m < 1 || m > 12) {
        printf("Invalid month entered!\n");
        return 1;
    }

    printf("Formatted date: %s-%s-%s\n", day, months[m - 1], year);

    return 0;
}
