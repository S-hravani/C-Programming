//Program to print Tables in ANY given Range(forward as well as backward)

#include<stdio.h>
#include<conio.h>

int main()
{
	int C = 0, R = 0, SNum = 0, ENum = 0;
	
	printf("\n Enter Starting Number = ");
	scanf("%d",&SNum);
	
	printf("\n Enter Ending Number = ");
	scanf("%d",&ENum);
	
	printf("\n Tables from %d to %d =>\n\n",SNum,ENum);
	
	if(SNum<ENum)                                     //FORWARD RANGE
	{
		for(R=1;R<=10;R++)           //ROW
		{
			for(C=SNum;C<=ENum;C++)         //COLUMN
			{
				printf(" %3d ",R*C);
			}
			printf("\n");
		}
	}
	
	else                                         //REVERSE RANGE
	{
		for(R=1;R<=10;R++)              //ROW
		{
			for(C=SNum;C>=ENum;C--)     //COLUMN
			{
				printf(" %3d ",R*C);
			}
			printf("\n");
		}
	}
	
	printf("\n Thanks");
	
	getch();
	return 0;
}
