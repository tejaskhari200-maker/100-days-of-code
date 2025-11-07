#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char line[200];

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try to open file in read mode
    fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    // If file exists, display its contents
    printf("File opened successfully.\n");
    printf("----- File Content -----\n");

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
