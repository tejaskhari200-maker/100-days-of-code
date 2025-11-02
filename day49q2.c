#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    gets(name);

    // Find last space (before surname)
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("Formatted name: ");

    // Print initials for all words except surname
    if (name[0] != ' ')
        printf("%c. ", name[0]);

    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ')
            printf("%c. ", name[i + 1]);
    }

    // Print surname in full
    if (lastSpace != -1)
        printf("%s\n", name + lastSpace + 1);
    else
        printf("%s\n", name);

    return 0;
}
