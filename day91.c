#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1;

    // Reading input
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Printing output
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s1.name, s1.roll_no, s1.marks);

    return 0;
}
