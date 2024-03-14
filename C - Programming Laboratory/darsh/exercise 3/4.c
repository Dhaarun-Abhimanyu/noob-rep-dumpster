#include <stdio.h>

int main() {
    char operation;
    int num1, num2;
    float result;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    switch(operation) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = (float)num1 / num2;
                printf("Result: %d / %d = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
    }

    return 0;
}
