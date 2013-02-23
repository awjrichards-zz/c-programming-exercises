/**
 * Write a program that asks the user to enter a dollars-and-cents amount,
 * then displays the amount with 5% tax added:
 * Enter an amount: 100.00
 * With tax added: $105.00
 */

#include <stdio.h>

int main(void) {
	float amount, tax = 0.05;
	printf( "Determine the total amount after tax\n" );
	printf( "Please enter your pre-tax amount: $" );
	scanf( "%f", &amount );
	printf( "Total after tax: $%.2f\n", amount + (amount * tax ) );
	return 0;
}
