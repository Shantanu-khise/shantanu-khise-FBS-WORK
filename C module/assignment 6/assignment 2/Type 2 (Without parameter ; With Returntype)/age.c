#include<stdio.h>
int age(); // declaration
void main()
{
	int res=age();//call
	if(res==1)
	{
		printf("Child");
	}
	else if(res==2)
	{
		printf("teenager");
	}else if(res==3){
		printf("adult");
	}else if(res==4){
		printf("senior");
	}
	 
	 
} //main ends here
int age()  // defenation
{
	int age;
	printf("Enter the Age:");
	scanf("%d",&age);
	if(age<12){
		return 1;
	}else if (age>=12&&age<=19){
		return 2;
	}else if(age>=20&&age<=59){
		return 3;
		
	}else{
		return 4;
	}
}