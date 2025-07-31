//WAP to check wheather number is even or odd
#include<stdio.h>
void main() {
	int num;

	printf("enter the number:");
	scanf("%d",&num);

	if(num%2==0) {
		printf("Even number");
	} else {
		printf("odd number");
	}
}