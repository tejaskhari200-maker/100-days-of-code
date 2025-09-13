#include <stdio.h>
int main() {
    int a, b;

    printf("Enter length: ");
    scanf("%d", &a);

    printf("Enter breadth: ");
    scanf("%d", &b);

    printf("Area of rectangle = %d\n", a * b);
    printf("Perimeter of rectangle = %d\n", 2 * (a + b));

    return 0;
}
