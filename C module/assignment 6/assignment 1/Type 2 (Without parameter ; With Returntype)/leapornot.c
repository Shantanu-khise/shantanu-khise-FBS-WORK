
//Write a program to check whether a given year is a leap year
#include <stdio.h>
int leapyear();//declaration

void main()
{
    int res=leapyear();//call
    if(res==1)
    {
       printf("leap year");	
	}
    else
    {
	printf("not leap");
    }
	
	
}// main ends here
int leapyear()
{
	int year;

    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    } else {
        return 0;
}
}
