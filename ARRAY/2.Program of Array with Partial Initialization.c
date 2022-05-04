// Program of Array with Partial Initialization
#include<stdio.h>
#include<conio.h>

int main()
{
	int value[5]  = {23,45};       //Declaration of 5 integer elements Array
	
	printf("\n Value of 1st element = %d",value[0]);     //as no initialization done we get garbage values
	printf("\n Value of 2nd element = %d",value[1]);
	printf("\n Value of 3rd element = %d",value[2]);
	printf("\n Value of 4th element = %d",value[3]);
	printf("\n Value of 5th element = %d",value[4]);
	
	getch();
	return 0;
}
