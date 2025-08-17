#include<stdio.h>
void topper(int);//declaration
void main() {
	int marks;
	printf("Enter Marks:");
	scanf("%d",&marks);
	topper(marks);//call
}//main ends here
void topper(int marks)//defination
{
if(marks>65) {
		printf("First Class");
	} else {
		if(marks>55) {
			printf("Second class");
		} else {
			if(marks>=40) {
				printf("Pass");

			} else {
				printf("Fail");
			}
		}
	}
}