//Program to find Num1 raise to Num2

#include<stdio.h>
#include<conio.h>

int main()
{
	int base = 0, exp = 0, pow = 0, temp = 0;
	
	printf("\n Enter the Base = ");
	scanf("%d",&base);
	
	printf("\n Enter the exponent = ");
	scanf("%d",&exp);
	
	temp=exp;
	
	for(pow=1;temp>0;temp--)
	{
		printf("\n pow = %d * %d = %d",pow,base,pow*base);
		pow=pow*base;
	
	}
	
	printf("\n\n power %d^%d = %d ",base,exp,pow);
	
	printf("\n\n Thanks");
	
	getch();
	return 0;
	
}
