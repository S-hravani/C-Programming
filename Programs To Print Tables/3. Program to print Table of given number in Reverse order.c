//Program to print Table of given number in Reverse order

#include<stdio.h>
#include<conio.h>

int main()
{
	int num = 0, cnt = 1;
	
	printf("\n Enter a number to print its Table in reverse order = ");
	scanf("%d",&num);
	
	printf("\n Table of %d in Reverse order = >",num);
	
	for(cnt=10;cnt>=1;cnt--)
	{
		printf("\n %d ", num*cnt);
	}
	
	printf("\n\n Thanks");
}
