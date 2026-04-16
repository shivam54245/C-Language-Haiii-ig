// Write a program that takes two operands and one operator from user and performs the operation and prints the result using switch statement.


#include<stdio.h>
int main () {
    float num1, num2;
    char operation;
    printf("Enter the two operands: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operation);
    switch (operation)
    {
    case '+':
        printf("Result: %.2f", num1+num2); break;
    case '-':
        printf("Result: %.2f", num1-num2); break;
    case '*':
        printf("Result: %.2f", num1*num2); break;
    case '/':
        if(num2 != 0) {
            printf("Result: %.2f", num1/num2);
        }
        else {
            printf("Cannot divide by zero.");
        }
        break;
    default:
        printf("Cannot perform that operation."); break;
    }
    return 0;
}