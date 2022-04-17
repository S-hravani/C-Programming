//Program to find sum of digits in given number

#include<stdio.h>
#include<conio.h>

int main()
{
	      int num = 0, temp = 0, dig = 0, dsum = 0;
	
    UP:      
		  
		  printf("\n Enter positive Number = ");
          scanf("%d",&num);
          
          if(num<=0)
          {
          	printf("\n Do enter positive integral value,\n");
          	goto UP;
		  }
		  
		  
		  temp = num;
		  
		  //digit sum logic
		  
		  while(temp>0)
		  {
		     dig = temp%10;
			 dsum = dsum + dig;
			 temp = temp/10; 	
		  }
		  
		  printf("\n Sum of digits in number %d is = %d ",num,dsum);
		  
		  getch();
		  return 0;
}
