#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    // Open existing file for reading
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    // Read each line until end of file (EOF)
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}
