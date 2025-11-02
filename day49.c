#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    gets(name);

    printf("Initials: ");

    // Print first character if not a space
    if (name[0] != ' ')
        printf("%c. ", name[0]);

    // Loop to find next initials after spaces
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ') {
            printf("%c. ", name[i + 1]);
        }
    }

    return 0;
}
