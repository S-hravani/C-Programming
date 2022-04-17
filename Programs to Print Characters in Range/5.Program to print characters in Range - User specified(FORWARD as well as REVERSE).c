//Program to print characters in Range - User specified(FORWARD as well as REVERSE)

#include<stdio.h>
#include<conio.h>

int main()
{
	char ch='\0', s_char='\0', e_char='\0';
	
	printf("\n Enter Starting Character = ");
	s_char = getche();
	
	printf("\n Enter Ending Character = ");
	e_char = getche();
	
	if(s_char<e_char)
	{
		for(ch=s_char;ch<=e_char;ch++)
		{
			printf("\n %c ",ch);
		}
	}
	else
	{
		for(ch=s_char;ch>=e_char;ch--)
		{
			printf("\n %c ",ch);
		}
	}
	
	getch();
	return 0;
	
}
