//Program to check whether given character is Uppercase or Lowercase

#include<stdio.h>
#include<conio.h>

int main()
{
	char ch= '\0';
	
	printf("\n Enter a character = ");
	scanf("%c",&ch);
	
	if(ch >= 'A' && ch <= 'Z')
	{
		printf("\n given character %c is Uppercase Letter",ch);
	}
	
	else if(ch >= 'a' && ch <= 'z')
	{
		printf("\n given character %c is Lowercase Letter",ch);
	}
	
	else if(ch >= '0' && ch <= '9')
	{
		printf("\n %c is Digit",ch);
	}
	
	else
	{
		printf("\n %c is Special symbol",ch);
	}
	
	getch();
	return 0;
}
