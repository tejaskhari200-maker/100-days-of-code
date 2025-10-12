#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1; 

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } 
    else {
        
        for (i = 1; i <= n; i++) {
            factorial *= i;  
        }

        
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
