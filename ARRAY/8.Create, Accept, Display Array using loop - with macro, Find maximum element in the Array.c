//Create, Accept, Display Array using loop - with macro, Find maximum element in the Array

#include<stdio.h>
#include<conio.h>

#define size 10

int main()
{
	int i = 0, value[size] = {0}, Max = 0;
	
	for(i=0;i<size;i++)
	{
		printf("\n Enter the %d element = ",i+1);
		scanf("%d",&value[i]);
		
		if(i == 0 || value[i]>Max)
		{
			Max = value[i];
		}
		
	}
	
	getch();
	
	printf("\n\n ELEMENTS IN ARRAY ARE =>\n\n ");
	
	
	for(i=0;i<size;i++)
	{
		printf("\n Value of %d element is = %d",i+1,value[i]);
	}
	
	printf("\n\n Maximum element in array is = %d",Max);
	
	getch();
	return 0;
}
