#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    int arr[100];

    // Step 1: Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Step 4: Perform Linear Search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element %d found at position %d.\n", key, i + 1);
            found = 1;
            break;
        }
    }

    // Step 5: If not found
    if(found == 0)
        printf("Element %d not found in the array.\n", key);

    return 0;
}
