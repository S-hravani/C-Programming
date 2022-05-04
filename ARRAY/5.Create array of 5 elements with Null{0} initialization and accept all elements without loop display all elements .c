//Create array of 5 elements with Null{0} initialization and accept all elements without loop display all elements 

#include<stdio.h>
#include<conio.h>

int main()
{
	int i = 0, value[5] = {0};
	
	printf("\n Enter the element %d = ",i+1);
	scanf("%d",&value[0]);
	printf("\n Enter the element %d = ",i+2);
	scanf("%d",&value[1]);
	printf("\n Enter the element %d = ",i+3);
	scanf("%d",&value[2]);
	printf("\n Enter the element %d = ",i+4);
	scanf("%d",&value[3]);
	printf("\n Enter the element %d = ",i+5);
	scanf("%d",&value[4]);
	
	
	getch();

    printf("\n\n ELEMENTS IN ARRAY ARE =>\n\n ");
	
	printf("\n Value of element %d = %d",i+1,value[0]);
	printf("\n Value of element %d = %d",i+2,value[1]);
	printf("\n Value of element %d = %d",i+3,value[2]);
	printf("\n Value of element %d = %d",i+4,value[3]);
	printf("\n Value of element %d = %d",i+5,value[4]);
	
	getch();
	return 0;
}
