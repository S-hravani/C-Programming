

#include<stdio.h>
#include<conio.h>

int main()
{
	int R = 0, C = 0, i = 0, j = 0;
	
	printf("\n Enter the number of Rows: ");
	scanf("%d",&R);
	
	printf("\n Enter the number of Columns: ");
	scanf("%d",&C);
	
	printf("\n Pattern is => \n\n");
	
	for(i=1;i<=R;i++)
	{
		for(j=1;j<=C;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	
	getch();
	return 0;
	
}
