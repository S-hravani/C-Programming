//Create, Accept, Display Array using loop - with macro, Find count of Null(zero) elements in the Array

#include<stdio.h>
#include<conio.h>

#define size 10

int main()
{
	int i = 0, value[size] = {0}, Zcnt = 0;
	
	for(i=0;i<size;i++)
	{
		printf("\n Enter the %d element = ",i+1);
		scanf("%d",&value[i]);
		
		if(value[i] == 0)
		{
			Zcnt++;
		}
	}
	
	
    getch();
	
	printf("\n\n ELEMENTS IN ARRAY ARE =>\n\n ");

	for(i=0;i<size;i++)
	{
		printf("\n Value of %d Element is = %d ",i+1,value[i]);
	}
	
	printf("\n\n Count of Zero elements in Array is = %d ",Zcnt);
	
	getch();
	return 0;
	
}


