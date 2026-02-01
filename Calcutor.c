#include <stdio.h>

int main() {
    int i, j, sum;
    printf("Enter your number1: ");
    scanf("%d", &i);

    printf("Enter your number2: ");
    scanf("%d", &j);

    sum = i + j;
    printf("Your answer is %d", sum);
    return 0;
}