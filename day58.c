#include <stdio.h>
#include <stdlib.h>

/*
 Product of Array Except Self (no division, O(n) time)
 Reads n, then n integers.
 Prints the result array in comma-separated form.
*/

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int *nums = malloc(n * sizeof(int));
    int *out  = malloc(n * sizeof(int));
    if (!nums || !out) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &nums[i]);
    }

    // Step 1: Build prefix products into out[]
    // out[i] will hold product of all elements left of i
    int prefix = 1;
    for (int i = 0; i < n; ++i) {
        out[i] = prefix;
        prefix *= nums[i];
    }

    // Step 2: Multiply by suffix products on the fly
    int suffix = 1;
    for (int i = n - 1; i >= 0; --i) {
        out[i] *= suffix;
        suffix *= nums[i];
    }

    // Print comma-separated result
    for (int i = 0; i < n; ++i) {
        printf("%d", out[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    free(nums);
    free(out);
    return 0;
}
