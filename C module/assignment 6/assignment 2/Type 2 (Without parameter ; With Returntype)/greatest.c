#include<stdio.h>

int greatest(); // declaration

void main()
{
    int res = greatest(); // call
    if (res == 1) {
        printf("a is greater");
    } else if (res == 2) {
        printf("b is greater");
    } else if (res == 3) {
        printf("c is greater");
    }
} // main ends here 

int greatest() // definition
{
    int a, b, c;
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);
    printf("Enter C: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        return 1; // a is greatest
    } else if (b > c) {
        return 2; // b is greatest
    } else {
        return 3; // c is greatest
    }
}
