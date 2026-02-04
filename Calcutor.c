#include <stdio.h>

int Calculator(int first);

int main() {
    int total;

    printf("Enter expression: ");
    scanf("%d", &total);

    total = Calculator(total);

    printf("Sum: %d\n", total);
    return 0;
}

int Calculator(int first) {
    int nextNum, result = 0;
    int term = first;
    char op;

    for (int i=0; i<first; i++) {
        op = getchar();
        if (op == '\n') {
            break;
        }
        scanf("%d", &nextNum);
        switch (op) {
        case '+':
            result += term;
            term = nextNum;
            break;
        case '-':
            result += term;
            term = -nextNum;
            break;
        case '*':
            term *= nextNum;
            break;
        case '/':
            term /= nextNum;
            break;
        case '%':
            term %= nextNum;
            break;
        default:
            printf("Invalid input %c", op); // op แสดงอะไร
            return result + term;
        }
    }
    return result + term;
}