//Create, Accept, Display Array using loop - with macro, Find minimum element in the Array

#include<stdio.h>
#include<conio.h>

#define size 10

int main()
{
	int i = 0, value[size] = {0}, Min = 0;
	
	for(i=0;i<size;i++)
	{
		printf("\n Enter the %d element = ",i+1);
		scanf("%d",&value[i]);
		
		if(i == 0)
		{
			Min = value[i];
			continue;
		}
		
		
		if(value[i]<Min)
		{
			Min = value[i];
		}
		
	}
	
	getch();
	
	printf("\n\n ELEMENTS IN ARRAY ARE =>\n\n ");
	
	
	for(i=0;i<size;i++)
	{
		printf("\n Value of %d element is = %d",i+1,value[i]);
	}
	
	printf("\n\n Minimum element in array is = %d",Min);
	
	getch();
	return 0;
}
