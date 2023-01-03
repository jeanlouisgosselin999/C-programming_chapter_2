/*
This program will examine each character in a character-type array called TEXT and determine
how many of the characters are letters, how many are digits, how many are whitespace characters, 
and how many are other kinds of characters (eg: punctuation marks, etc.)

HINT: we will be using the ASCII values of these characters to define a search-and-compare field, and this 
search-and-compare field will consist of a series of IF statements encased in a WHILE loop!
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char text[80];
	int i, j, num_low_letters=0, num_upper_letters=0, num_digits=0, num_whitespaces=0, num_other=0; 
	
	printf("Please enter your text (80 characters max):\n\n");
	
	//saving text using getchar():
	for(i=0; (text[i] = getchar()) != '\n'; ++i)
	;
	
	j = i; //assigning last, and therefore highest, value of "i" into "j", which will serve as the limit value in the WHILE loop below
	i=0;//re-initializing "i" to 0
	
	while (i<=j) {
		
			//for lowercase letters:
				if ((text[i] >= 97) && (text[i] <= 122))
					++num_low_letters;


			//for uppercase letters:		
				if ((text[i] >= 65) && (text[i] <= 90))
					++num_upper_letters;

				
			//for digits:
				if ((text[i] >= 48) && (text[i] <= 57))
					++num_digits;

				
			//for whitespaces:
				if (text[i] == 32)
					++num_whitespaces;

			
			//for all other stuff:	
				if ((text[i] >= 33) && (text[i] <= 47))
					++num_other;

				
				if ((text[i] >= 58) && (text[i] <= 64)) 
					++num_other;


				if ((text[i] >= 91) && (text[i] <= 96))
					++num_other;
				
				
				if ((text[i] >= 123) && (text[i] <= 126))
					++num_other;					
		
			//MUST INCREMENT "i" AFTER EACH LOOP!!
			++i;
		}
	
	printf("\n\n");
	printf("In the text you have entered, there are: \n\n");
	printf("%d lowercase letters;\n\n", num_low_letters);
	printf("%d uppercase letters;\n\n", num_upper_letters);
	printf("%d digits;\n\n", num_digits);
	printf("%d whitespaces;\n\n", num_whitespaces);
	printf("And finally: there are %d other characters, such as punctuation marks, commas...\n", num_other);
	
	getchar();
	getchar();

	
	return 0;
}
