//Program to count digits in given number

#include<stdio.h>
#include<conio.h>

int main()
{
	      int num = 0, dcnt = 0;
   UP:	
	      printf("\n Enter positive number = ");
	      scanf("%d",&num);
	    
	      if(num<=0)
	      {
	    	 printf("\n Do enter positive integral value,\n");
	    	 goto UP;
		  }
		  
		
		  
		 while(num>0)
	  	 {
	  	    num = num/10;               //digit count logic
	  	    dcnt++;
	  	   // printf("\n num = %d \t digcount = %d ",num,dcnt);
	     }
		  
		  
		  printf("\n\n Digits in given number are = %d ",dcnt);
		  
		  getch();
		  return 0;
}
