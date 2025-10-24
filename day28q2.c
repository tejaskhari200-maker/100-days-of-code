#include <stdio.h>

int main() {
    int n, i;
    int arr[100];  // Declare an array (max size 100)

    // Step 1: Take number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Read array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Print array elements
    printf("You entered:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
