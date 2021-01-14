//WAP for any character entered through keyboard,to check whether it is capital,small letter,digit or special symbol
//my first trial
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character: ");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	printf("The entered character is a capital letter");
	else if(ch>='a'&&ch<='z')
	printf("The entered character is a small letter");
	else if(ch>='0'&&ch<='9')
	printf("The entered character is a digit");
	else
	printf("The entered character is a special symbol");
	return 0;
}
