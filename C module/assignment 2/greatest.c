//WAP to find greatest of three numbers using nested if-else
#include<stdio.h>
void main() {

	int a,b,c;
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	printf("Enter C:");
	scanf("%d",&c);
	if(a>b) {
		if(a>c){
		
		printf("A is Greater");
}
	} else {
		if(b>c) {
			printf("B is Greater");
		} else {
			printf("C is Greater");
		}
	}
}