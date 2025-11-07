#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;  // flag to detect when we are inside a word

    // Open the file
    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    // Read each character till end of file
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        // Check for word boundaries
        if (isspace(ch))
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    // In case file doesn't end with newline, count last line
    if (characters > 0 && ch != '\n')
        lines++;

    // Display results
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
