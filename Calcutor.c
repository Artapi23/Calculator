#include <stdio.h>

int calculate(int a, int b, char op, int *error);

int main() {
    int num1, num2, result;
    char mode;
    int error;

    while (1) {
        printf("Select mode (+ - * / %% to exit(Q)): ");
        scanf(" %c", &mode);

        if (mode == 'q' || mode == 'Q') {
            printf("Exit program\n");
            break;
        }

        printf("Enter number 1: ");
        scanf("%d", &num1);

        printf("Enter number 2: ");
        scanf("%d", &num2);

        result = calculate(num1, num2, mode, &error);

        if (error == 1) {
            printf("Cannot divide or modulo by zero\n");
        } else if (error == 2) {
            printf("Invalid mode\n");
        } else {
            printf("Your answer = %d\n", result);
        }
    }

    return 0;
}

int calculate(int a, int b, char op, int *error) {
    *error = 0;

    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) {
                *error = 1;
                return 0;
            }
            return a / b;
        case '%':
            if (b == 0) {
                *error = 1;
                return 0;
            }
            return a % b;
        default:
            *error = 2;
            return 0;
    }
}