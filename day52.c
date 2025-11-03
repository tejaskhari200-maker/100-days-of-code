#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;     // potential ceil found
            high = mid - 1;   // try to find smaller or earlier one
        } else {
            low = mid + 1;    // move right
        }
    }

    return result;
}

int main() {
    int n, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);
    printf("%d\n", index);

    return 0;
}
