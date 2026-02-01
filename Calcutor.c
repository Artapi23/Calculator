// Git input-output test
#include <stdio.h>
#include <stdlib.h>
void print_number(char **str_number);
int main() {
    int Number = 0 ;
   while (Number != 99)
   {
        char *str_number;
        printf("Input Number -->");
        scanf("%d", &Number);
        snprintf(str_number, sizeof(str_number), "%d", Number);
        print_number(&str_number);
   }    
    return 0;
}
void print_number(char **str_number){
    printf("%s\n",*str_number);
}
