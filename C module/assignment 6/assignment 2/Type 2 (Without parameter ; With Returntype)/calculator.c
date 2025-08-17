#include<stdio.h>

// Function declarations
int add();
int sub();
int mul();
int mod();
double div();

void main() {
    int result;

    result = add();
    printf("Addition = %d\n", result);

    result = sub();
    printf("Subtraction = %d\n", result);

    result = mul();
    printf("Multiplication = %d\n", result);

    result = mod();
    printf("Modulo = %d\n", result);

    double dresult = div();
    printf("Division = %lf\n", dresult);
}

// Function definitions
int add() {
    int a, b;
    printf("Enter two numbers for addition: ");
    scanf("%d %d", &a, &b);
    return a + b;
}

int sub() {
    int a, b;
    printf("Enter two numbers for subtraction: ");
    scanf("%d %d", &a, &b);
    return a - b;
}

int mul() {
    int a, b;
    printf("Enter two numbers for multiplication: ");
    scanf("%d %d", &a, &b);
    return a * b;
}

int mod() {
    int a, b;
    printf("Enter two numbers for modulo: ");
    scanf("%d %d", &a, &b);
    if (b != 0)
        return a % b;
    else {
        printf("Modulo by zero error!\n");
        return 0;
    }
}

double div() {
    int a, b;
    printf("Enter two numbers for division: ");
    scanf("%d %d", &a, &b);
    if (b != 0)
        return (double)a / b;
    else {
        printf("Division by zero error!\n");
        return 0.0;
    }
}
