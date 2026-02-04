#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

    int choice;
    double num;
    double Result = 0 ; 

void displayMenu();
void input_Number ();
int main() {
    int total;

    printf("Enter expression: ");
    scanf("%d", &total);

    total = Calculator(total);
      input_Number();
      Result += num;
    do{  
        displayMenu();
        printf("input Choice -->  ");
        scanf("%d", &choice);
        if(choice >= 6 && scanf("%d", &choice) != 1){//ตรวจสอบตัวแปรของข้อมูล
            printf("ข้อมูลผิดพลาด! กรุณาใส่ตัวเลขใหม่: ");
            while (getchar() != '\n');
        }
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
    case 5:
        input_Number();
        Result = fmod(Result, num);
        printf("Result: %.2f\n",Result);
        break;
    case 0:
        printf("Exiting...\n");
        break;
    default:
        break;
    }
    } while (choice != 0);
    printf("Result = %.2f\n",Result);

    printf("Sum: %d\n", total);
    return 0;
}

void input_Number (){
       printf("Enter numbers: ");
    while (scanf("%lf", &num) != 1) { //ตรวจสอบตัวแปรของข้อมูล
        printf("ข้อมูลผิดพลาด! กรุณาใส่ตัวเลขใหม่: ");
     while (getchar() != '\n');
    }
}
void displayMenu() {
    printf("\n--- Scientific Calculator ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%)\n");
    printf("0. Exit\n");
}

