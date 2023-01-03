/*
This program will calculate the sum of every third integer, beginning with 1 = 2, and continuing
for all integers that are less than 100.
It will then calculate the sum of those integers that are evenly dividble by 5.
For this exercise, we will use an IF-ELSE statement nested in a WHILE loop.
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int i = 2, sumTotal = 0;
	signed int newNumber = -1; 
								
	printf("Numbers from 2 to 100 counting every third integer are:\n\n");
	
	while (newNumber<100){ 
						
		newNumber += i + 1;
		
		if (newNumber%5 == 0) {
		printf("%d ; ", newNumber);	
		sumTotal += newNumber;
		}
		//no need for an ELSE: we have set ONE condition for numbers to be printed, and that is sufficient. All other numbers are discarded.
	}

	printf("\n\nThe total sum of all these numbers is: %d \n\n", sumTotal);

	return 0;
}
