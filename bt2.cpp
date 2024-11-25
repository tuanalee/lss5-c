#include <stdio.h>

int main() {
    int targetNumber = 42; 
    int userInput;

    printf("nhap so bi mat de chien thang\n", targetNumber);

    
    do {
        printf("Nhap so: ");
        scanf("%d", &userInput);
    } while (userInput != targetNumber); 

    printf("Chuc mung! Ban dã nhap dung so %d.\n", targetNumber);
    return 0;
}
