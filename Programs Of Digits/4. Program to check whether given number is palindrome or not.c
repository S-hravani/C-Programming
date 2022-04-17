//Program to check whether given number is palindrome or not

#include<stdio.h>
#include<conio.h>

int main()
{
	     int num = 0, temp = 0, rev = 0, dig = 0;
	
    UP:     
		 printf("\n Enter a positive number = ");
		 scanf("%d",&num);
		 
		 if(num<=0)
		 {
		 	 printf("\n Do enter positive integral value,\n");
		 	 goto UP;
		 }
		 
		 temp=num;
		 
		 while(temp>0)
		 {
		 	dig = temp%10;
		 	rev = (rev * 10) + dig;
		 	temp = temp/10;
		 }
		 
		 
		 if(rev==num)
		 {
		 	printf("\n As given number %d equal to its reverse number %d,",num,rev);
		 	printf("\n hence given number %d is Palindrome .",num);
		 }
		 else
		 {
		 	printf("\n As given number %d is not equal to its reverse number %d,",num,rev);
		 	printf("\n hence given number %d is not Palindrome .",num);
	
		 }
		 
		 getch ();
		 return 0;
		 
		 
		 	
} 
