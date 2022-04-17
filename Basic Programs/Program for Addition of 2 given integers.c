#include<stdio.h>
#include<conio.h>

int main()
{
	int No1 = 0, No2 = 0, Sum = 0;
	
	printf("\n Enter 2 integer numbers for Addition = ");
	scanf("%d%d",&No1,&No2);
	
	Sum = No1 + No2;
	
	printf("\nAddition of %d and %d = %d",No1,No2,Sum);
	getch();
	return 0;
}
