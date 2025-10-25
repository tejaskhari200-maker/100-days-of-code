#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100]; // array to store up to 100 elements

    // Step 1: Take number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Take array input
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Calculate sum
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Step 4: Display result
    printf("Sum of array elements = %d\n", sum);

    return 0;
}
