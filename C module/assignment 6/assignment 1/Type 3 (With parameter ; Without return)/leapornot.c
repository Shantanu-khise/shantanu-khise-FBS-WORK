
//Write a program to check whether a given year is a leap year
#include <stdio.h>
void leapornot(int);//declaration
int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);
    leapornot(year);//call
}

void  leapornot(int year) {
   
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is NOT a Leap Year.\n", year);
    }
}
