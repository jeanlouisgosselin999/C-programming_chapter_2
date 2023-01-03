/* 
This program will read the characters in a character-type array called TEXT and
write the characters backwards into another character-type arra called BACKTEXT.
We will use comma operators in a FOR loop.
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char text[80], backtext[80];
	int i, j;
	
	printf("Enter a text of your choice (80 characters max): \n\n");
	
	//saving the text with getchar():
	for(i=0; (text[i] = getchar()) != '\n'; ++i)
	;
	
	//assigning the last, and therefore highest, value of "i" into "j", and "j" to be used as max limit in the following loop
	j = i;
	
	for(i=0; i<=j, j>=0; ++i, --j) 
		backtext[j] = text[i];		/*
										here: we are using comma operators, which enables us to place 2 instructions instead of 1
										in our FOR loop requirements.
										also: the expression "backtext[j] = text[i];" means we are transferring the contents 
										of text[] into backtext[], but in reverse order. see below for more details.
									*/
				
	printf("\nHere is your text written backwards:\n");
	
		
	//printing BACKTEXT:
	for(j=0; j<i; ++j)
		putchar(backtext[j]);	
	
	return 0;
}

/*

************* EXPLANATIONS *************

the program goes like this:

the word "hello":

			h   	e   	l   	l   	o
			(0)		(1)		(2)		(3)		(4)
			
			
a 5-character word, with index starting on 0.

this is how the transfer in "for(i=0; i<=j, j>=0; ++i, --j) backtext[j] = text[i];" works:

we know that, as we are about to start this process, j==5 and i==0.

so:			backtext[]			text[]

			j = 4	<======		i = 0 (h)
					transferring
					(and so: first character (0==>h) of text[] 
					becomes last character (4==>h) of backtext[]
	
	
	incrementing "i", decrementing "j";				
	is i<=j? yes; is j>=0? yes; we continue
	
	
			j = 3	<======		i = 1 (e)
					transferring
					(and so: second character (1==>e) of text[] 
					becomes penultimate character (3==>e) of backtext[]
					
					
	incrementing "i", decrementing "j";				
	is i<=j? yes; is j>=0? yes; we continue
	
			
			j = 2	<======		i = 2 (l)
					transferring
					(and so: third character (2==>l) of text[] 
					becomes third character (2==>l) of backtext[]
					
					
	incrementing "i", decrementing "j";				
	is i<=j? yes; is j>=0? yes; we continue
	
	
			j = 1	<======		i = 3 (l)
					transferring
					(and so: fourth character (3==>l) of text[] 
					becomes second character (1==>l) of backtext[]
					
					
	incrementing "i", decrementing "j";				
	is i<=j? yes; is j>=0? yes; we continue
	
	
			j = 0	<======		i = 4 (l)
					transferring
					(and so: third character (2==>l) of text[] 
					becomes third character (2==>l) of backtext[]
					
	incrementing "i", decrementing "j";				
	is i<=j? NO; is j>=0? NO; we stop
	
Since now: i = 4 and j = 0, it is why we are now inverting our next FOR loop to: 	for(j=0; j<i; ++j)

Finally, the expression "putchar(backtext[j]);" prints our backtext[]						
			

*/


