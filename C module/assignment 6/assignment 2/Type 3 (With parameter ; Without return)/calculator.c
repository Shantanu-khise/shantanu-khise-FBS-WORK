#include<stdio.h>

void calculator(double, double, char); // declaration

void main() {
    double num1, num2;
    char op;
    
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    
    printf("Enter an operator (+,-,*,/,%): ");
    scanf(" %c", &op);
    
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    
    calculator(num1, num2, op); // call
}

void calculator(double num1, double num2, char op) { // definition
    if(op == '+') {
        printf("Result = %lf", num1 + num2);
    } 
    else if(op == '-') {
        printf("Result = %lf", num1 - num2);
    } 
    else if(op == '*') {
        printf("Result = %lf", num1 * num2);
    } 
    else if(op == '/') {
        if(num2 != 0)
            printf("Result = %lf", num1 / num2);
        else
            printf("Error: Division by zero");
    } 
    else if(op == '%') {
        if(num2 != 0)
            printf("Result = %d", (int)num1 % (int)num2);
        else
            printf("Error: Modulo by zero");
    } 
    else {
        printf("Invalid Operator");
    }
}
