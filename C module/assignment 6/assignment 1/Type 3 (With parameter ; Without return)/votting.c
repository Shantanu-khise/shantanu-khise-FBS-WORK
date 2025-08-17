#include<stdio.h>

int votting(int); // Function declaration

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
   int res=votting(age); // Call with correct variable
   if(res==1)
   {
   	printf("eligible for votting");
   }
   else
   {
   	printf("not eligible for votting");
   }
}

int votting(int age) { // Parameter ka naam yahi use karo
    if(age >= 18) {
        return 1;
    } else {
       return 0;
    }
}
