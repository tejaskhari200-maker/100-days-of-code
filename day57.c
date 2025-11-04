#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous Greater Elements: ");
    for (int i = 0; i < n; i++) {
        int prev = -1; // Default value if no greater element exists
        for (int j = i - 1; j >= 0; j--) { // Look to the left side
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break; // Stop at the first greater element
            }
        }

        printf("%d", prev);
        if (i < n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
