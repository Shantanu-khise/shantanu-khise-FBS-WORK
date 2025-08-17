#include<stdio.h>
void votting(int);//declaration
int main(){
	int age;
	printf("Enter the Age:");
	scanf("%d",&age);
	votting(age);//call
}//main ends here
void votting(int age){

if(age<12){
		printf("Child");
	}else if (age>=12&&age<=19){
		printf("teenager");
	}else if(age>=20&&age<=59){
		printf("Adult");
		
	}else{
		printf("Senior");
	}
}