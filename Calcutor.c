
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

    int choice;
    double num;
    double Result = 0 ; 

void print_number(char **str_number);
void displayMenu();
void input_Number ();
int main() {
  
     printf("Enter numbers: ");
     scanf("%lf",&num);
      Result += num;
    do{  
        displayMenu();
        printf("input Choice -->  ");
        scanf("%d", &choice);
      switch (choice){
    case 1:
        input_Number();
        Result += num;
        printf("Result: %.2f\n",Result);
        break;
    case 2:
        input_Number ();
        Result -= num;
        printf("Result: %.2f\n",Result);
        break;
    case 3:
        input_Number ();
        Result *= num;
        printf("Result: %.2f\n",Result);
        break;
    case 4:
        input_Number ();
        Result /= num;
        printf("Result: %.2f\n",Result);
        break;
    case 0:
        printf("Exiting...\n");
        break;
    default:
        break;
    }
    } while (choice != 0);
    printf("Result = %.2f",Result);

    return 0;
}
void print_number(char **str_number){
    printf("%s\n",*str_number);
}
void input_Number (){
     printf("Enter numbers: ");
     scanf("%lf",&num);
}
void displayMenu() {
    printf("\n--- Scientific Calculator ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("0. Exit\n");
}

