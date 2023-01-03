/*
This program will calculate the sum of every third integer, beginning with 1 = 2.
(so: calculate the sum 2+5+7+9+11.....)
It will do this for all values of i that are less than 100.
We will do this 2 ways:
1) with a WHILE loop;
2) with a FOR loo.
*/

/*
IMPORTANT: to make things more practical, we have combined both versions in the same MAIN(). We have therefore
used twice the same variables but with different names (i ==> j etc..)
*/

#include <stdio.h>
#include <stdlib.h>

//***************************************  FIRST VERSION: "while" LOOP  ***************************************


int main(int argc, char *argv[]) {
	
	//NOTE: we have combined and declared ALL variables for BOTH versions here.
	int i = 2, j = 2, sumTotal = 0, totalSum = 0;
	signed int newNumber = -1, myNewNumber = -1; /*
												we set this to value (-1) so as to START the list with a new number of 2.
												NOTE: "i" serves as a looped constant, we therefore do not use this variable 
												to start the new number.
												*/
								
	printf("Numbers from 2 to 100 counting every third integer are:\n\n");
	
	while (myNewNumber<98){ /*
							unlike what was said above regarding the 100-limit, the problem is that, from 98, 
							when we add 3, the result is 101; therefore, the limit cannot be 100 but instead 98.
						*/
							
		myNewNumber += j + 1;
		printf("%d ; ", myNewNumber);	
		totalSum += myNewNumber;
	}

	
	printf("\n\nThe total sum of all these numbers is: %d \n\n", totalSum);
	


//***************************************  SECOND VERSION: "for" LOOP  (with different variables) ***************************************

								
	printf("Numbers from 2 to 100 counting every third integer are:\n\n");
	
	for( ; newNumber<98; ) { /*
								NOTE: newNumber has already been initialized to (-1), and all the incrementation process 
								is done WITHIN the FOR loop.
							*/
		newNumber += i + 1;
		printf("%d ; ", newNumber);	
		sumTotal += newNumber;
	}
		
	printf("\n\nThe total sum of all these numbers is: %d \n\n", sumTotal);
	
	return 0;
}
