/*
This program will calculate Fibonacci numbers.
Remember: the Fibonacci is defined by this sequence:

F(i) = F(i-1) + (i-2)

...whereby each number is equal to the sum of the previous two numbers.

NOTE: the sequence always starts from 0;
then: F1 = F2 = 1;
after: F3 = F2 + F1 = 1+1 = 2;
and: F4 = F3 + F2 = 2+1 = 3;
and: F5 = F4 + F3 = 5;
and so forth...
 
Also: this is not a hard exercise. It involves 2 very simple steps:
1) assigning the result of the addition of both variables into a current sum variable;
2) swapping the values of these variables.

Fibonacci is first and foremost a VISUAL exercise, which requires minimal observation. 
Observe the explanation notes at the end of this program to understand why.

*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int n; // == number of Fibonacci values displayed
	int first=0; // == first "f" number (left)
	int second=1; // == second "f" number (right)
	int currentSum;
	int i; // only used as incrementing index
	
	printf("Please enter the number of rows of operations you wish to display: \n\n");
	scanf("%d", &n);
	
	printf("\nHere are your numbers: \n\n");
	
	for(i=0; i<n; i++) {
		
		//this is only for the first 2 results, displaying: 0 1
		if (i<=1)
			currentSum = i;
		
		//NOTE: the first loop below will produce the result of: F2 = F1 + F0 = 0+1 = 1; then: F3 = F2 + F1 = 1+1 = 2; then: F4 = F3 + F2 = 2+1 = 3;
		else {
			
			//1) calculating nextSum:
			currentSum = first + second;
			
			//2) then: shifting/swapping contents (which does not affect the "printf" result below)
			second = first;
			first = currentSum; //*** see below for explanation
		}
		
		printf("%d\n", currentSum);
	}
	
	getchar();	
	
	return 0;
}


/*

EXPLANATION:

The sequence is thus:

first: F1 = F2 = 1;

then try to visualise the shifting process in all three numbers at the end of each expression
(NOTE: between 1st and 2nd lines, the difference isn't that obvious):

F3 = F2 + F1 = 1 + 1 = 2

				compare this last operation with the next one:
				"first"(1), above, is transferred to "second", below (===> NOT OBVIOUS, BECAUSE THIS FIRST OPERATION HAS TWO "1")
				"currentSum(2), above, is transferred to "first", below.

F4 = F3 + F2 = 2 + 1 = 3

				compare this last operation with the next one:
				"first"(2), above, is transferred to "second", below;
				"currentSum(3), above, is transferred to "first", below.

F5 = F4 + F3 = 3 + 2 = 5

				compare this last operation with the next one:
				"first"(3), above, is transferred to "second", below;
				"currentSum(5), above, is transferred to "first", below.

F6 = F5 + F4 = 5 + 3 = 8

				compare this last operation with the next one:
				"first"(5), above, is transferred to "second", below;
				"currentSum(8), above, is transferred to "first", below.

F6 = F6 + F5 = 8 + 5 = 13

				compare this last operation with the next one:
				"first"(8), above, is transferred to "second", below;
				"currentSum(13), above, is transferred to "first", below.

F8 = F7 + F6 = 13 + 8 = 21

				compare this last operation with the next one:
				"first"(13), above, is transferred to "second", below;
				"currentSum(21), above, is transferred to "first", below.

F9 = F8 + F7 = 21 + 13 = 34

etc etc etc.....


*/
