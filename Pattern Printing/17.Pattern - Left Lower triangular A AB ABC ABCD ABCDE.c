//Pattern - Left Lower triangular A AB ABC ABCD ABCDE
#include<stdio.h>
#include<conio.h>

int main()
{
	char ch ='\0';
	int i = 0, j = 0, X = 0;
	
	printf("\n Enter the number of Rows and Columns: ");
	scanf("%d",&X);
	
	for(i=1;i<=X;i++)
	{
		for(ch='A',j=1;j<=X;j++,ch++)
		{
			if(i>=j)
			{
				printf(" %c ",ch);

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
