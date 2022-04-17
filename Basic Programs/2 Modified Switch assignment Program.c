//switch assignment program
/*enter a character to get message as=>
                                A/a=>print "welcome"
                                B/b=>print "good bye"
                                C/c=>print "have a nice day"
                                D/d=>print "good day"
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char Letter=0;
	
UP:	
	printf("\n enter a letter to get message:");
	Letter=getche();
	
	
	switch(Letter)
	{
		case 'A':
		case 'a':
			     printf("\n Hello");
			     break;
	     
		case 'B':
	        case 'b':
			     printf("\n Good Bye");
			     break;

	        case 'C':
		case 'c':
			     printf("\n Have a Nice Day");
			     break;

	        case 'D':
	        case 'd':
			     printf("\n Good Day");
			     break;

                default:
         	             printf("\n enter invalid character");
         	             goto UP;
	}
		
        printf("\nThanks for input");
	
	getch();
	return 0;
}

