#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    double sum = (n * (n + 1)) / 2.0;
    int x = (int)sqrt(sum);

    if (x * x == sum)
        printf("%d\n", x);
    else
        printf("-1\n");

    return 0;
}
