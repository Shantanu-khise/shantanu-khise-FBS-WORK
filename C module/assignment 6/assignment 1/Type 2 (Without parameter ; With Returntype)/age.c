#include<stdio.h>

 int age();//declaration
void main()
{
int res=age();//call
if(res==1){
	printf("eligible for vote ");
}
else 
{
	printf("not eligible");
}
	
	
}//main ends here
int age()
{
int Age;
	printf("Enter Age: ");//defination
	scanf("%d",&Age);

	if(Age>=18)
	{
		return 1;
	}
	 else
    {
		return 0;
	}
}