#include<stdio.h>
int tnx();//declaration
void main()
{
	int res=tnx();//call
  if(res==1)
  {
  	printf("divisible by both");
  }else if(res==2){
  printf("divisible by 3 but not 5");
  }else if(res==3){
  	printf("divisible by 5 but not 3");
  }else if(res==4){
  	printf("divisible by none ");
  }
	  
	  	
}

int tnx()

{
int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num%3==0&&num%5==0){
		return 1;
	}else if(num%3==0&&num%5!=0){
		return 2;
	}else if(num%5==0&&num%3!=0){
	    return 3;
	}else{
		return 4;
	}
}