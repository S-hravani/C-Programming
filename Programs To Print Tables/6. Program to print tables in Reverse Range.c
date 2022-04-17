//Program to print tables in Reverse Range

#include<stdio.h>
#include<conio.h>

int main()
{
	int R = 0, C = 0, SNum = 0, ENum = 0;
	
	printf("\n Enter Starting Number = ");
	scanf("%d",&SNum);
	
	printf("\n Enter Ending Number = ");
	scanf("%d",&ENum);
	
	printf("\n Tables from %d to %d =>\n\n",SNum,ENum);
	
	for(R=1;R<=10;R++)
	{
		for(C=SNum;C>=ENum;C--)
		{
			printf(" %4d ", R*C);
		}
		printf("\n");
	}
	
	printf("\n Thanks");
	
	getch();
	return 0;
}
