#include<stdio.h>
void greatest(int,int,int);//declaration
void main(){

	int a,b,c;
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	printf("Enter C:");
	scanf("%d",&c);
	greatest(a,b,c);//call
}
void greatest(int a,int b,int c)//defination
{
	
if(a>b) {
		if(a>c){
		
		printf("A is Greater\n");
    }
	} else {
		if(b>c) {
			printf("B is Greater\n");
		} else {
			printf("C is Greater\n");
		}
	}
}