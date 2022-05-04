//Create, Accept, Display Array using loop - with macro, Find summation of all elements in that Array

#include<stdio.h>
#include<conio.h>

#define size 7

int main()
{
	int i = 0 ,value[size] = {0}, Sum = 0;
	
	for(i=0;i<size;i++)
	{
		printf("\n Enter the %d element = ",i+1);
		scanf("%d",&value[i]);
		
		Sum = Sum + value[i];
	}
	
	getch();
	
	printf("\n\n ELEMENTS IN ARRAY ARE =>\n\n ");

	
	for(i=0;i<size;i++)
	{
		printf("\n Value of %d element is = %d",i+1,value[i]);
    }
	
	printf("\n\n Summation of all elements in Array is = %d",Sum);
	
	getch();
	return 0;
}
