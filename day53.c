#include <stdio.h>

int main() {
    int n;
    if (printf("Enter number of elements: "), fflush(stdout), scanf("%d", &n) != 1) return 0;

    long long arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &arr[i]);
    }

    long long total = 0;
    for (int i = 0; i < n; ++i) total += arr[i];

    long long leftSum = 0;
    for (int i = 0; i < n; ++i) {
        long long rightSum = total - leftSum - arr[i]; // sum strictly to the right
        if (leftSum == rightSum) {
            printf("%d\n", i);
            return 0;
        }
        leftSum += arr[i];
    }

    printf("-1\n");
    return 0;
}
