#include<stdio.h>
int vowel();//declaration
void main() {
    
	int res=vowel();//call
	if(res==1)
	{
		printf("vowel");
	}
	else
	{
		printf("not vowels");
	}
	
}//main ends hear
int vowel()
{

	char cha;
	printf("Enter character: ");    //defination
	scanf("%c",&cha);

	if(cha=='a'||cha=='e'||cha=='i'||cha=='o'||cha=='u'||cha=='A'||cha=='E'||cha=='I'||cha=='O'||cha=='U')
	{
		return 1;
	} 
	else 
	{
		return 0;
	}
}