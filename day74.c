#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFile[50], destFile[50];
    char ch;

    // Take file names from user
    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Open source file in read mode
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error! Cannot open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen(destFile, "w");
    if (destination == NULL) {
        printf("Error! Cannot create destination file.\n");
        fclose(source);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully to %s\n", destFile);

    // Close both files
    fclose(source);
    fclose(destination);

    return 0;
}
