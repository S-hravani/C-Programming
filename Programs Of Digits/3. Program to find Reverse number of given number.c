//Program to find Reverse number of given number

#include<stdio.h>
#include<conio.h>

int main()
{
	      int num = 0, rev = 0, temp = 0, dig = 0;

    UP:      
		  
		  printf("\n Enter positive number = ");
		  scanf("%d",&num);
		  
		  if(num<=0)
		  {
		  	  printf("\n Do enter positive integral value,\n");
		  	  goto UP;
		  }
		  
		  temp = num;
		  
		  //reverse number logic
		  
		  while(temp>0)
		  {
		  	 dig = temp%10;
		  	 rev = (rev * 10) + dig;
		  	 temp = temp/10;
		  }	
		  
		  printf("\n Reverse number of given number %d is = %d ",num,rev);
		  
		  getch();
		  return 0;
}
