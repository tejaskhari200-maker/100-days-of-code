#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    
    printf("Enter a number: ");
    scanf("%d", &n);

    
    while (n != 0) {
        remainder = n % 10;           
        reversed = reversed * 10 + remainder;  
        n = n / 10;                   
    }

    // Output result
    printf("Reversed number = %d\n", reversed);

    return 0;
}
