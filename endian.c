#include <stdio.h>
#include <math.h>

int main( void ) {
	long int i = 3 * (long int) pow( 2, 24 ) + 3 * 256 + 3;
	const char *p = (const char *) &i;

	if( p[0] == 1 )
		printf( "result: LITTLE ENDIAN\n" );
	else
		printf( "result: BIG ENDIAN\n" );

	printf( "%s - %d\n", "p[0]", (long int) p[0] );
	printf( "%s - %d\n", "p[1]", (long int) p[1] );
	printf( "%s - %d\n", "p[2]", (long int) p[2] );
	printf( "%s - %d\n", "p[3]", (long int) p[3] );
	
	return 0;
}
