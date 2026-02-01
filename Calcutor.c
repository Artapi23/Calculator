#include <stdio.h>

int main() {
    int i, j, sum;
    char s;
    printf("Enter your number 1: ");
    scanf("%d", &i);

    printf("Select calculator (+ - * / %): ");
    scanf("%s", &s);

    printf("Enter your number 2: ");
    scanf("%d", &j);

    switch (s) {
        case '+':
            sum = i + j;
            break;
        case '-':
            sum = i - j;
            break;
        case '*':
            sum = i * j;
            break;
        case '/':
            sum = i / j;
            break;
        case '%':
            sum = i % j;
            break;
        default:
            printf("Error calculator");
            break;
    }

    printf("Your answer is %d", sum);
    return 0;
}