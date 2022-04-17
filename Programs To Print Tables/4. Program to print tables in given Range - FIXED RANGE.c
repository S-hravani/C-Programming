// Program to print tables in given Range - FIXED RANGE

#include<stdio.h>
#include<conio.h>

int main()
{
	int R = 0, C = 0, SNum = 11, ENum = 15;
	
	printf("\n Tables from %d to %d =>\n\n",SNum,ENum);
    
    for(R=1;R<=10;R++)
    {
    	for(C=SNum;C<=ENum;C++)
    	{
		  printf(" %3d", R*C);
	    }
	    printf("\n");
	}
	
	printf("\n\n Thanks");
	
	getch();
	return 0;
} 
