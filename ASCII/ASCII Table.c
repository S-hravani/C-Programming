//Ascii Table

#include<stdio.h>
#include<conio.h>

int main()
{
	int value = 0;
	printf("\n ASCII TABLE");
	
	for(value=0;value<128;value++)
	{
		printf("\n %d = %c",value,value);
	}
	
	printf("\n\n Thanks");
	getch();
	return 0;
}
