#include<stdio.h>
int triangle(); // declaration

void main()
{
    int res = triangle(); // call
    if(res == 1) {
        printf("Equilateral triangle");
    } else if (res == 2) {
        printf("Isosceles triangle");
    } else {
        printf("Scalene triangle");
    }   
} // main ends here

int triangle() // definition 
{
    int a, b, c;
    printf("Enter Side A: ");
    scanf("%d", &a);
    printf("Enter Side B: ");
    scanf("%d", &b);
    printf("Enter Side C: ");
    scanf("%d", &c);
    
    if(a == b && b == c) {
        return 1;
    } else if (a == b || b == c || c == a) {
        return 2;
    } else {
        return 3;
    }
}
