/**
 * Write a program that uses printf to display the following picture on the screen:
 *
 *        *
 *       *
 *      *
 * *   *
 *  * *
 *   *
 *
 */

#include <stdio.h>

int main(void) {
	printf( "%8c\n", '*' );
	printf( "%7c\n", '*' );
	printf( "%6c\n", '*' );
	printf( "%c%4c\n", '*', '*' );
	printf( "%2c%2c\n", '*', '*' );
	printf( "%3c\n", '*' );
	return 0;
}

