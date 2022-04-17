//Program to find Cube of given number

#include<stdio.h>
#include<conio.h>

int main()
{
	int num = 0, cube = 0;
	
	printf("\n Enter the number = ");
	scanf("%d",&num);
	
	cube = num*num*num;
	
	printf("\n cube of given number =>  %d^3 = %d ",num,cube);
	
	getch();
	return 0;
}
