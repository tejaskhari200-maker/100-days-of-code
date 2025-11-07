#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    // Take file name and text input from user
    printf("Enter file name: ");
    scanf("%s", filename);
    getchar(); // to consume leftover newline

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    // Append the new line to the file
    fprintf(fp, "\n%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
