/**
 * Write a program that computes the volume of a sphere with a 10-meter
 * radius, using the formula v=4/3πr^3. Write the fraction 4/3 as 4.0f/3.0f.
 * (Try writing it as 4/3. What happens?) Hint: C doesn't have an
 * exponention operator, so you'll need to multiply r by itself twice to
 * compute r^3.
 */

#include <stdio.h>
#include <math.h>

int main(void) {
	int radius = 10;
	float volume;
	volume = ( 4.0f/3.0f ) * M_PI * radius * radius * radius; 
	printf( "Volume of a sphere with a radius of %d: %f\n", radius, volume );
	return 0;
}
