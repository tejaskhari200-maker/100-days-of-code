#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    long long arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &arr[i]);
    }

    // Kadane's algorithm, using long long for sums
    long long max_ending = arr[0];
    long long max_so_far = arr[0];

    for (int i = 1; i < n; ++i) {
        if (max_ending + arr[i] < arr[i])
            max_ending = arr[i];
        else
            max_ending = max_ending + arr[i];

        if (max_ending > max_so_far)
            max_so_far = max_ending;
    }

    printf("%lld\n", max_so_far);
    return 0;
}
