//Program to find whether given number is Positive or Negative using Ternary operator

#include<stdio.h>
#include<conio.h>

int main()
{
	int Num = 0;
	
	printf("\n Enter the Number to find whether it is Positive or Negative = ");
	scanf("%d",&Num);
	
	(Num == 0) ? printf("\n Given number is Neutral") : ((Num>0) ? printf("\n Given number is Positive") : printf("\n Given number is Negative"));
	
     getch();
	 return 0;	
	
}
