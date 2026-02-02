#include <stdio.h>

int Calculator(int total);

int main() {
    int total;

    printf("Enter expression: ");
    scanf("%d", &total);

    total = Calculator(total);

    printf("Sum: %d\n", total);
    return 0;
}

int Calculator(int total) {
    int nextNum;
    char op;

    while ((op = getchar()) != '\n') {
        scanf("%d", &nextNum);
        switch (op) {
        case '+':
            total += nextNum;
            break;
        case '-':
            total -= nextNum;
            break;
        case '*':
            total *= nextNum;
            break;
        case '/':
            total /= nextNum;
            break;
        case '%':
            total %= nextNum;
            break;
        default:
            printf("Invalid input", op);
            return total;
        }
    }
    return total;
}