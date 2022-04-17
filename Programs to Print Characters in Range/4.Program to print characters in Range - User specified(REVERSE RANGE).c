// Program to print characters in Range - User specified(REVERSE RANGE)

#include<stdio.h>
#include<conio.h>

int main()
{
	char ch='\0', s_char='\0', e_char='\0';
	
	printf("\n Enter Starting Character = ");
	s_char = getche();
	
	printf("\n Enter Ending Character = ");
	e_char = getche();
	
	for(ch=s_char;ch>=e_char;ch--)
	{
		printf("\n %c ",ch);       //printf("\n %c = %d",ch,ch)
	}
	
	printf("\n\n Thanks");
	getch();
	return 0;
}
