//Pattern - Z

#include<stdio.h>
#include<conio.h>

int main()
{
	int i = 0, j = 0, X = 0;
	
	printf("\n Enter the number of Rows and Columns: ");
	scanf("%d",&X);
	
	printf("\n Pattern is=> \n\n");
	
	for(i=1;i<=X;i++)
	{
		for(j=1;j<=X;j++)
		{
			if( i == 1 || i == X || i+j == X+1)
			{
				printf(" * ");
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

