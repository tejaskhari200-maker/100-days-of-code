#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int brr[n];

    // Reverse
    for(int i = 0; i < n; i++){
        brr[i] = arr[n - 1 - i];
    }

    printf("Reversed array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", brr[i]);
    }

    return 0;
}
