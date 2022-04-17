//Program to find num1 raise to num2 (if-else)

#include<stdio.h>
#include<conio.h>

int main()
{
	int base = 0, exp = 0, temp = 0, pow = 0;
	
	printf("\n Enter base = ");
	scanf("%d",&base);
	
	printf("\n Enter exponent = ");
	scanf("%d",&exp);
	
	if(base==0 || base==1)
	{
		pow = base;
	}
	else
	{
		for(pow=1,temp=exp;temp>0;temp--)
		{
			//printf("\n pow = %d^%d = %d ",base,exp,base*pow);
			pow=pow*base;
		}
	}
	
	printf("\n\n power = %d^%d = %d",base,exp,pow);
	
	printf("\n Thanks");
	
	getch();
	return 0;
}

