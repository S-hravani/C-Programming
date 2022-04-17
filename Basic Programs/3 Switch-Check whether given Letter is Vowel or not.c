//program to check whether given letter is vowel or not

#include<stdio.h>
#include<conio.h>

int main()
{
	char Letter=0;
	
	printf("\n enter character for vowel check:");
	Letter=getche();
	
	switch(Letter)
	{
		case 'A':
		case 'a':
	    case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
		       printf("\n\n Entered letter is vowel");
			   break;
			   
	    default:
		        printf("\n\n entered letter is not vowel");
				break;
						    
	}
	
	printf("\n\n Thanks for input");
	
	getch();
	return 0;
}
