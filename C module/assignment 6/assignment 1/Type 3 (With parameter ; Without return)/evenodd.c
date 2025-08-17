
#include<stdio.h>
void evenodd(int );
void main() {
	int num;

	printf("enter the number:");
	scanf("%d",&num);
    evenodd(num);
}

//start 

void evenodd(int num) {
	
	if(num%2==0) {
		printf("Even number");
	} else {
		printf("odd number");
	}
}