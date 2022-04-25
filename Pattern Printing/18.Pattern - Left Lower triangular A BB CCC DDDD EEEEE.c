//Pattern - Left Lower triangular A BB CCC DDDD EEEEE
#include<stdio.h>
#include<conio.h>

int main()
{
	char ch ='\0';
	int i = 0, j = 0, X = 0;
	
	printf("\n Enter the number of Rows and Columns: ");
	scanf("%d",&X);
	
	for(ch='A',i=1;i<=X;i++,ch++)
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
			
		}
		printf("\n");
	}

getch();
return 0;
}
