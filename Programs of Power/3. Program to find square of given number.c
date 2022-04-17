//Program to find square of given number

#include<stdio.h>
#include<conio.h>

int main()
{
	int num = 0, square = 0;
	
	printf("\n Enter the number = ");
	scanf("%d",&num);
	
	square = num * num;
	
	printf("\n Square of given number => %d^2 = %d",num,square);
	
	getch();
	return 0;
}
