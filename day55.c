#include <stdio.h>

int findMajorityElement(int arr[], int n) {
    int candidate = -1;
    int count = 0;

    // Phase 1: Find a candidate using Boyer-Moore Voting Algorithm
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify if the candidate is actually a majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2)
        return candidate;
    else
        return -1; // No majority element
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result = findMajorityElement(arr, n);

    if (result != -1)
        printf("Majority element is: %d\n", result);
    else
        printf("No majority element found.\n");

    return 0;
}
