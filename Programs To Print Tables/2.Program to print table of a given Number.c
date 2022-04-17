//Program to print table of a given Number 

#include<stdio.h>
#include<conio.h>

int main()
{
	int num = 0, cnt = 1;
	printf("\n Enter a Number to get its Table = ");
	scanf("%d",&num);
	
	printf("\n Table of %d =>",num);
	
	while(cnt<=10)
	{
		printf("\n %d ", num*cnt);
		cnt++;
	}

    printf("\n\n Thanks");
}

