//Write to rivers a given number of any digit using recursive function  
#include <stdio.h>

int reverse(int num, int rev){
    if (num == 0) {
        return rev;
    }
    return reverse(num / 10, rev * 10 + num % 10);
}
int main() {
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);

    result = reverse(n, 0);
	printf("Reversed number = %d\n", result);   
}



