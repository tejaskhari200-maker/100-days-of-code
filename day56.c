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

    printf("Next Greater Elements: ");
    for (int i = 0; i < n; i++) {
        int next = -1; // Default if no greater element is found
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break; // Stop at the first greater element
            }
        }

        printf("%d", next);
        if (i < n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
