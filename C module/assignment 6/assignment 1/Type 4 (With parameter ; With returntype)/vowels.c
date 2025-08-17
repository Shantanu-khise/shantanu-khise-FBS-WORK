#include<stdio.h>
int vowels(char);//declarationn
void main(){
	char cha;
	printf("Enter character: ");
	scanf("%c",&cha);
	int res=vowels(cha);//call
	if(res==1)
	{
		printf("vowel");
	}
	else
	{
		printf("not vowel");
	}
	
}//main ends here
int vowels(char cha){

    if(cha=='a'||cha=='e'||cha=='i'||cha=='o'||cha=='u'||cha=='A'||cha=='E'||cha=='I'||cha=='O'||cha=='U')
	{
	return 1;
	}else{
		return 0;
	}
}
