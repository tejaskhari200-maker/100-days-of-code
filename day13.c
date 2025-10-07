#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    int resultInt;
    float resultFloat;

    // Input
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  // space before %c to consume any leftover whitespace

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    switch(operator) {
        case '+':
            resultInt = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, resultInt);
            break;
        case '-':
            resultInt = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, resultInt);
            break;
        case '*':
            resultInt = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, resultInt);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is undefined.\n");
            } else {
                resultFloat = (float)num1 / num2;
                printf("Result: %d / %d = %.2f\n", num1, num2, resultFloat);
            }
            break;
        case '%':
            if (num2 == 0) {
                printf("Error: Modulus by zero is undefined.\n");
            } else {
                resultInt = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, resultInt);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
