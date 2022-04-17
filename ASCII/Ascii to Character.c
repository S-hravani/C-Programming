//ascii to character
#include<stdio.h>
#include<conio.h>

int main()
{
	int value = 0;
	printf("\n enter the ascii value = ");
	scanf("%d",&value);
	printf("\n character for given ascii value %d is %c",value,value);
	getch();
	return 0;
}
