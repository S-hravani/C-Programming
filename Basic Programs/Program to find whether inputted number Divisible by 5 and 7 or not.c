// Program to find whether inputted number Divisible by 5 and 7 or not
#include<stdio.h>
#include<conio.h>

int main()
{
	int Num = 0;
	
	printf("\n Enter the Number = ");
	scanf("%d",&Num);
	
    if(Num % 5 == 0 && Num % 7 == 0)
	{
		printf("\n Given number %d is divisible by 5 and 7 both",Num);
	}	
	
	else if(Num % 5 == 0)
	{
		printf("\n Given number %d is divisible by 5 and not by 7",Num);
	}
	
	else if(Num % 7 == 0)
	{
		printf("\n Given number %d is divisible by 7 and not by 5",Num);
	}
	else
	{
        printf("\n Given number %d is neither divisible by 5 nor 7 ",Num);
	}
	
	
	getch();
	return 0;
}

