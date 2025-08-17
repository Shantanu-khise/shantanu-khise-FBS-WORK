#include<stdio.h>
void traingle(int,int,int);//declaration
void main(){
	int a,b,c;
	printf("Enter Side A:");
	scanf("%d",&a);
printf("Enter Side B:");
	scanf("%d",&b);
	printf("Enter Side C:");
	scanf("%d",&c);
	traingle(a,b,c);//call
	
}
void traingle(int a,int b,int c)//defination
{
if(a==b&&b==c){
		printf("Equilateral triangle");
	}else if (a==b||b==c||c==a){
		printf("Isosceles Triangle");
	}else{
		printf("scalene Triagles");
	}
}