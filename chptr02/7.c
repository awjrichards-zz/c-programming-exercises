/**
 * Write a program that asks the user to enter a US dollar amount and then
 * shows how to pay that amount using the smallest number of $20, $10, $5,
 * and $1 bills:
 */

#include <stdio.h>

int main(void) {
	int amnt;
	printf( "Enter a dollar amount: $" );
	scanf( "%d", &amnt );
	int twenties = amnt/20;
	amnt = amnt - (20*twenties);
	int tens = amnt/10;
	amnt = amnt - (10*tens);
	int fives = amnt/5;
	amnt = amnt - (5*fives);
	int ones = amnt;
	printf( "$20 bills: %d\n", twenties );
	printf( "$10 bills: %d\n", tens );
	printf( " $5 bills: %d\n", fives );
	printf( " $1 bills: %d\n", ones );
	return 0;
}
