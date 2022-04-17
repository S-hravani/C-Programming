//Program to print table of 7

#include<stdio.h>
#include<conio.h>

int main()
{
	int num = 7, cnt = 1;
	
	printf("\n Table of 7 =>");
	
	while(cnt<=10)
	{
		printf("\n %d",num*cnt);
		cnt++;
	}
	
	printf("\n\n Thanks");
	
	getch();
	return 0;
}
