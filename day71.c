#include <stdio.h>

int main() {
    char name[50];
    int age;

    // Taking user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Creating file in write mode
    FILE *fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error! Unable to create file.\n");
        return 1;
    }

    // Writing data to file
    fprintf(fp, "Name: %sAge: %d", name, age);

    // Closing the file
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
