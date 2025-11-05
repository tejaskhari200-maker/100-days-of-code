#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size (k): ");
    scanf("%d", &k);

    int result[n - k + 1], index = 0;

    for (int i = 0; i <= n - k; i++) {
        int found = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                result[index++] = arr[j];
                found = 1;
                break;
            }
        }
        if (!found)
            result[index++] = 0;
    }

    // Print result
    for (int i = 0; i < index; i++)
        printf("%d ", result[i]);
    printf("\n");

    return 0;
}
