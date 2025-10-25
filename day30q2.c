#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int positive = 0, negative = 0, zero = 0;

    // Step 1: Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Count positives, negatives, and zeros
    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else
            zero++;
    }

    // Step 4: Display results
    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zeros = %d\n", zero);

    return 0;
}
