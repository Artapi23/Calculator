#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int choice;
double num;
double Result = 0; 

void displayMenu();
void input_Number();

int main() {
    printf("--- Welcome to Calculator ---\n");
    input_Number();
    Result = num; // ตั้งค่าเริ่มต้นจากตัวเลขแรกที่พิมพ์

    do {  
        displayMenu();
        printf("Input Choice --> ");
        
        // ตรวจสอบว่าสิ่งที่พิมพ์มาเป็นตัวเลขหรือไม่
        if (scanf("%d", &choice) != 1) {
            printf("Error! Please Enter a Number (0-5).\n");
            while (getchar() != '\n'); // ล้างค่าใน Buffer ทิ้ง
            continue; // กลับไปเริ่ม Loop ใหม่
        }

        switch (choice) {
            case 1: input_Number(); Result += num; break;
            case 2: input_Number(); Result -= num; break;
            case 3: input_Number(); Result *= num; break;
            case 4: 
                input_Number(); 
                if(num != 0) Result /= num; 
                else printf("Cannot divide by zero!\n");
                break;
            case 5: 
                input_Number(); 
                if(num != 0) Result = fmod(Result, num); 
                else printf("Cannot mod by zero!\n");
                break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Please select 0-5.\n"); break;
        }

        if (choice != 0) {
            printf("\n>>> Result: %.2f <<<\n", Result);
        }

    } while (choice != 0);

    printf("Final Result = %.2f\n", Result);
    
    return 0; // ต้องอยู่ก่อนปีกกาปิดของ main
}

void input_Number() {
    printf("Enter number: ");
    while (scanf("%lf", &num) != 1) {
        printf("Error! Please Enter a Valid Number: ");
        while (getchar() != '\n');
    }
}

void displayMenu() {
    printf("\n--- Menu ---\n");
    printf("1. (+)\n2. (-)\n3. (*)\n4. (/)\n5. (%%)\n0. Exit\n");
}