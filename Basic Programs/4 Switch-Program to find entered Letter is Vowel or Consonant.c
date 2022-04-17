//program to check whether given letter is vowel or consonant

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
		            printf("\n Entered letter is vowel");
			    break;
		case 'B':
		case 'b':
	        case 'C':
		case 'c':
		case 'D':
		case 'd':
		case 'F':
		case 'f':
		case 'G':
		case 'g':
		case 'H':
	        case 'h':
		case 'J':
		case 'j':
		case 'K':
		case 'k':
		case 'L':
		case 'l':
		case 'M':
		case 'm':
		case 'N':
	        case 'n':
		case 'P':
		case 'p':
		case 'Q':
		case 'q':
		case 'R':
		case 'r':
		case 'S':
		case 's':
		case 'T':
	        case 't':
		case 'V':
		case 'v':
		case 'W':
		case 'w':
		case 'X':
		case 'x':
		case 'Y':
		case 'y':
		case 'Z':
		case 'z':
		           printf("\n entered letter is consonant");
				 break;
				         	   
	        default:
		           printf("\n entered letter is neither vowel nor consonant");
				break;
						    
	}
	
	printf("\n\n Thanks for input");
	
	getch();
	return 0;
}
