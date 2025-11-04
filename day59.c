#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter k (subarray size): ");
    if (scanf("%d", &k) != 1 || k <= 0) {
        printf("Invalid k.\n");
        free(arr);
        return 1;
    }

    if (k > n) {
        printf("k is larger than array size. No subarray of size %d.\n", k);
        free(arr);
        return 1;
    }

    long long curr = 0;
    for (int i = 0; i < k; ++i) curr += arr[i];

    long long maxSum = curr;

    for (int i = k; i < n; ++i) {
        curr += arr[i];
        curr -= arr[i - k];
        if (curr > maxSum) maxSum = curr;
    }

    printf("Maximum sum of subarray of size %d is: %lld\n", k, maxSum);

    free(arr);
    return 0;
}
