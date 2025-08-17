#include<stdio.h>

int oddeven(); // declaration

int main() {
    int res = oddeven(); // call

    if(res == 1) {
        printf("No is even");
    }
    else {
        printf("No is odd");
    }

    return 0;
} // main ends here

int oddeven() { // definition
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        return 1; // even
    }
    else {
        return 0; // odd
    }
}
