#include <stdio.h>
#include <ctype.h> // For isupper, islower, isdigit

int main() {
    char ch;

    // Input a character
    printf("Enter a single character: ");
    scanf("%c", &ch);

    // Check character type
    if (isupper(ch)) {
        printf("The character is an uppercase alphabet.\n");
    } else if (islower(ch)) {
        printf("The character is a lowercase alphabet.\n");
    } else if (isdigit(ch)) {
        printf("The character is a digit.\n");
    } else {
        printf("The character is a special character.\n");
    }

    return 0;
}
