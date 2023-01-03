/*
This program will print the ASCII equivalent of a text entered by the user and saved in a character-type array.
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char text[80];
	int i, j;
	
	printf("Type in a text of your choice (80 characters max):\n\n");
	
	//saving the text:
	for(i=0; (text[i] = getchar()) != '\n'; ++i);
	;
	
	j = i; //assigning the last, and therefore highest, value of "i" to "j" in order to use "j" as the limit of the next loop below: 
	
	//printing the ASCII equivalent of all characters types in text[]:
	printf("The ASCII equivalent of the text you have entered is:\n\n");
	
	for(i=0; i<j; ++i)
		printf("%d ", text[i]);//all we need to do is change the format identifier from "char" (==>%c) to "int" (==>%d)!!
	
	
//*******************************  instead of the FOR loop, we can write it as such with a WHILE loop  ***************************
	/*
	i=0;	
	while(i<j) {
		printf("%d ", text[i]);
		++i;
	}
	*/
//*********************************************************************************************************************************
		
	getchar();
	getchar();
	
	
	return 0;
}
