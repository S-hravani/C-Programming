//Pattern - Left Lower triangular A FG KLM PQRS UVWXY
#include<stdio.h>
#include<conio.h>

int main()
{
	char ch ='A';
	int i = 0, j = 0, X = 0;
	
	printf("\n Enter the number of Rows and Columns: ");
	scanf("%d",&X);
	
	for(i=1;i<=X;i++)
	{
		for(j=1;j<=X;j++)
		{
			if(i>=j)
			{
				printf(" %c ",ch);

			}
			else
			{
				printf("   ");
			}
			ch++;
		}
		printf("\n");
	}

getch();
return 0;
}
