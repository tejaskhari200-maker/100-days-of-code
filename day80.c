#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;

    // Open file for writing
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Writing records into file
    fprintf(fp, "Asha 101 85\n");
    fprintf(fp, "Ravi 102 92\n");

    fclose(fp);  // close after writing

    // Open file again for reading
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("Student Records:\n");

    // Reading and displaying each record
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp); // close after reading

    return 0;
}
