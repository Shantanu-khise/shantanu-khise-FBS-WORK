#include<stdio.h>

void vowels(char); // declaration

void main() {
    char cha;
    printf("Enter character: ");
    scanf("%c", &cha);  // character input
    vowels(cha);        // function call
}

void vowels(char cha) { // definition
    if(cha=='a'||cha=='e'||cha=='i'||cha=='o'||cha=='u'||
       cha=='A'||cha=='E'||cha=='I'||cha=='O'||cha=='U') {
        printf("Vowel");
    } else {
        printf("Consonant");
    }
}
