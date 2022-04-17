//Program to find Maximum number amongst 2 numbers using Ternary operator

#include<stdio.h>
#include<conio.h>

int main()
{
	          int num1 = 0, num2 = 0;

    UP:
	
	          printf("\n Enter first number = ");
	          scanf("%d",&num1);
	
	          printf("\n Enter second number = ");
	          scanf("%d",&num2);
	 
	          if(num1 == num2)
              {
	            	printf("\n Both the numbers are Equal.");
		            goto UP;
	          }
	
	          (num1>num2) ? printf("\n %d is maximum",num1) : printf("\n %d is maximum",num2);
	
	          getch();
	          return 0;
}
