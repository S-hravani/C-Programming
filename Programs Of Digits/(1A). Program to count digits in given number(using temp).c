// Program to count digits in given number(using temp)

#include<stdio.h>
#include<conio.h>

int main()
{
	      int num = 0, dcnt = 0, temp = 0;
	
	UP:      
		  printf("\n Enter positive number = ");
	      scanf("%d",&num);
	      
	      if(num<=0)
	      {
	      	printf("\n Do enter positive intergral value,\n");
	      	goto UP;
		  }
	      
	      
	      temp = num;
	      while(temp>0)
		  {
		  	  temp = temp/10;               //digit count logic
		  	  dcnt++;
		  	 // printf("\n temp = %d \t digcount = %d",temp,dcnt);
		  	  
		  }	
		  
		  printf("\n\n Digits in given number %d are = %d",num,dcnt);
		  
		  getch();
		  return 0;
} 
