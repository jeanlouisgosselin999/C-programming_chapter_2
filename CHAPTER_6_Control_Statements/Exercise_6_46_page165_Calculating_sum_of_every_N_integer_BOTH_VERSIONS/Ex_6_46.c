#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int number_to_start, number_to_stop, loop_value, i = 1, sumTotal = 0;
	
	printf("Please enter a  number from which the loop will start (any integer of your choice):\n");
	scanf("%d", &number_to_start);
	
	printf("\n\n");
	
	printf("What will your looping value be? (any integer of your choice):\n");
	scanf("%d", &loop_value);
	
	printf("\n\n");
	
	printf("What should be the limit of your list? (any integer of your choice):\n");
	scanf("%d", &number_to_stop);
	
	printf("\n\n");
	
	printf("Your starting number is: %d. The program will add: %d to your starting number in a loop until you have reached your chosen limit of: %d", number_to_start, loop_value, number_to_stop);
	
	printf("\n\n");
	
	printf("Here are your numbers:\n\n");
	
	printf("%d ; ", number_to_start);
	while(sumTotal < 200) {
		number_to_start += loop_value*i;
		sumTotal += number_to_start;
		printf("%d ; ", sumTotal);
		++i;	
	}
	
	
	
	printf("The total sum of every %dth integer is: %d", loop_value, sumTotal);
	
	
	
	
	
	return 0;
}
