#include<stdio.h>

int pallindrome(); // declaration

int main()
{
    int res = pallindrome(); // call
    if(res == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}

int pallindrome()
{
    int number, r1, r3;

    printf("Enter the 3-digit number: ");
    scanf("%d", &number);

    r1 = number % 10;    // last digit
    r3 = number / 100;   // first digit

    if(r1 == r3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
