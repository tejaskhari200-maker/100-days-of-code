#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s;

    // Allocating memory for structure
    s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory not allocated\n");
        return 0;
    }

    // Taking input
    scanf("%s %d %d", s->name, &s->roll, &s->marks);

    // Printing details
    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);

    // Freeing memory
    free(s);

    return 0;
}
