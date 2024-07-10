#include <stdio.h>
#include <stdlib.h>
void add();
void subtract();
void multiply();
void divide();
void modulus();

int main() {
    char choice;

    do {
        
        printf("\nMenu:\n");
        printf("a. Addition\n");
        printf("b. Subtraction\n");
        printf("c. Multiplication\n");
        printf("d. Division\n");
        printf("e. Modulus\n");
        printf("q. Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                add();
                break;
            case 'b':
                subtract();
                break;
            case 'c':
                multiply();
                break;
            case 'd':
                divide();
                break;
            case 'e':
                modulus();
                break;
            case 'q':
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 'q');

    return 0;
}
void add() {
    int a, b;
    printf("Enter two numbers to add: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d + %d = %d\n", a, b, a + b);
}
void subtract() {
    int a, b;
    printf("Enter two numbers to subtract: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d - %d = %d\n", a, b, a - b);
}
void multiply() {
    int a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d * %d = %d\n", a, b, a * b);
}
void divide() {
    int a, b;
    printf("Enter two numbers to divide: ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("Result: %d / %d = %.2f\n", a, b, (float)a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
void modulus() {
    int a, b;
    printf("Enter two numbers to find modulus: ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("Result: %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
