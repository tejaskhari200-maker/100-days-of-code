#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n, i, topperIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++) {
        printf("Enter name, roll, marks of student %d: ", i+1);
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    // find topper
    for(i = 1; i < n; i++) {
        if(s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", s[topperIndex].name, s[topperIndex].marks);

    return 0;
}
