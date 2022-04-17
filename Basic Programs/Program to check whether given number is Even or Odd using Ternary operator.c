//Program to check whether given number is Even or Odd using Ternary operator 

#include<stdio.h>
#include<conio.h>

int main()
{
	     int Num = 0;
	
    UP:
	     printf("\n Enter the number to find whether it is Even or Odd = ");
	     scanf("%d",&Num);
	
         if(Num == 0)
	     {
		     printf("\n Given Number is Neutral");
		     goto UP;
	     } 
	
	     (Num % 2 == 0) ? printf("\n %d is Even",Num) : printf("\n %d is Odd",Num);
	
	     getch();
	     return 0;
}
