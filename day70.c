#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // take full line as input
    
    int length = strlen(str);

    // Loop through each character
    for (int i = 0; i < length; i++) {
        // Capitalize first character of the string
        if (i == 0 && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
        // Capitalize first letter after a space
        else if (str[i - 1] == ' ' && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
        // Make other letters lowercase
        else {
            str[i] = tolower(str[i]);
        }
    }

    printf("Converted Sentence:\n%s", str);
    return 0;
}
