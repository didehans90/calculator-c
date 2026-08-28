#include <stdio.h>

int add(int num1, int num2) {
    return num1 + num2;
}

int subtraction(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int divide(int num1, int num2) {
    return num1 / num2;
}

int main(void) {

    int num1;
    int num2;
    int result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    int choice;
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        result = add(num1, num2);
        printf("The result is: %d\n", result);
        break;

    case 2:
        result = subtraction(num1, num2);
        printf("The result is: %d\n", result);
        break;

    case 3:
        result = multiply(num1, num2);
        printf("The result is: %d\n", result);
        break;

    case 4:
        result = divide(num1, num2);
        printf("The result is: %d\n", result);
        break;
    
    default:
        break;
    }

}

