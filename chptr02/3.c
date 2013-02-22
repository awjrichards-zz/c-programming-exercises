/**
 * Modify the program of Programming Project 2 so that it prompts the user to
 * enter the radius of the sphere.
 */

#include <stdio.h>
#include <math.h>

int main(void) {
	float volume, radius;
	printf( "Determine the volume of a sphere, given a radius.\n" );
	printf( "Please enter the sphere's radius: " );
	scanf( "%f", &radius );
	volume = ( 4.0f/3.0f ) * M_PI * radius * radius * radius; 
	printf( "Volume of a sphere with a radius of %.2f: %f\n", radius, volume );
	return 0;
}
