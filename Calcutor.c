// Git input-output test
#include <stdio.h>
#include <stdlib.h>
void print_number(char **str_number);
void displayMenu();
int main() {
    int choice;
    double num1 ,num2 ;
    do{
        displayMenu();
        scanf("%d", &choice);
      switch (choice){
    case 1:
        printf("Enter two numbers: ");
        scanf("%lf", &num1);
        printf("Enter two numbers: ");
        scanf("%lf",&num2);
        printf("Result: %.2f\n", num1 + num2);
        break;
    case 2:
        printf("Enter two numbers: ");
        scanf("%lf", &num1);
        printf("Enter two numbers: ");
        scanf("%lf",&num2);
        printf("Result: %.2f\n", num1 - num2);
        break;
    case 3:
        printf("Enter two numbers: ");
        scanf("%lf", &num1);
        printf("Enter two numbers: ");
        scanf("%lf",&num2);
        printf("Result: %.2f\n", num1 * num2);
        break;
    case 4:
       printf("Enter two numbers: ");
        scanf("%lf", &num1);
        printf("Enter two numbers: ");
        scanf("%lf",&num2);
        printf("Result: %.2f\n", num1 / num2);
        break;
    case 0:
        printf("Exiting...\n");
        break;
    default:
        break;
    }
    } while (choice != 0);


    return 0;
}
void print_number(char **str_number){
    printf("%s\n",*str_number);
}
void displayMenu() {
    printf("\n--- Scientific Calculator ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("0. Exit\n");
}