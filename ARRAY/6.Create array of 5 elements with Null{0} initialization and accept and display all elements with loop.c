//Create array of 5 elements with Null{0} initialization and accept and display all elements with loop

#include<stdio.h>
#include<conio.h>

int main()
{
	int i = 0, value[5] = {0};
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter the element %d = ",i+1);
		scanf("%d",&value[i]);
	}
	
	getch();
	
	printf("\n\n ELEMENTS IN ARRAY ARE =>\n\n ");
	
	
	for(i=0;i<5;i++)
	{
		printf("\n Value of %d element is = %d",i+1,value[i]);
	}
	
	getch();
	return 0;
}

