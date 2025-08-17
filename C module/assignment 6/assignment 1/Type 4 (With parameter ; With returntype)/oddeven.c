#include<stdio.h>
int evenodd(int );
void main() {
	int num;

	printf("enter the number:");
	scanf("%d",&num);
   int res= evenodd(num);
   if(res==1)
   {
   	printf("even");
   }
   else
   {
   	printf("odd");
   }
}

//start 

int evenodd(int num) {
	
	if(num%2==0) {
		return 1;
	} else {
		return 0;
	}
}