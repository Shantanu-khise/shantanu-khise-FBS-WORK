
#include<stdio.h>
void salaryslip(int);//declaration
void main()
{
	int salary;
	printf("Enter your basic Salary: ");
	scanf("%d",&salary);
    salaryslip(salary);

	
}

void salaryslip (int salary)
{
	int TA,DA,HRA ,total;

	if(salary<=5000) {
		DA=((salary*10)/100);
		TA=((salary*20)/100);
		HRA=((salary*25)/100);
		

	} else {
		DA=((salary*15)/100);
		TA=((salary*25)/100);
		HRA=((salary*30)/100);
		

	}
	total=salary+DA+TA+HRA;
	printf("DA: %d\n",DA);
    printf("TA: %d\n", TA);
    printf("HRA: %d\n", HRA);
    printf("Total Salary: %d\n", total);
}
