//Pattern - Left Lower Triangular 7

#include<stdio.h>
#include<conio.h>


int main()
{
	int i = 0, j = 0, X = 0, Num = 1;
	
	printf("\n Enter the Number of rows and columns: ");
	scanf("%d",&X);
	
	for(i=1;i<=X;i++)
	{
		for(j=1;j<=X;j++)
		{
			if(i>=j)
			{
				printf(" 7 ");
				Num++;
			}
			else
			{
				printf("   ");
			}
			
		}
		printf("\n");
	}
	getch();
	return 0;
}
