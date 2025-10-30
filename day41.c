#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str);  // You can use fgets(str, 100, stdin); instead of gets() in modern compilers

    while (str[count] != '\0') {
        count++;
    }

    printf("Number of characters in the string: %d\n", count);
    return 0;
}
