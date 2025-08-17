// WAP to check whether a given character is uppercase or lowercase
#include<stdio.h>

int upperlower(); // declaration

void main()
{
    int res = upperlower(); // call

    if(res == 1)
    {
        printf("Uppercase character");
    }
    else if(res == 0)
    {
        printf("Lowercase character");
    }
    else
    {
        printf("The character is not an alphabet letter.");
    }
}

// definition
int upperlower()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        return 1; // uppercase
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        return 0; // lowercase
    }
    else
    {
        return -1; // not an alphabet
    }
}
