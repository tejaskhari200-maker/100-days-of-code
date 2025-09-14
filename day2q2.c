#include <stdio.h>
int main() {
    int r;
    float pi = 3.14, area;

    printf("Enter radius: ");
    scanf("%d", &r);

    area = pi * r * r;   // formula for area of circle
    printf("Area of circle: %.2f\n", area);

    return 0;
}
