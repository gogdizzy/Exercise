#include <stdio.h>

#define SUPPORT( x ) printf( "%s %s\n", #x, __builtin_cpu_supports( #x ) ? "OK" : "NO" )

int main() {

	SUPPORT( cmov );
	SUPPORT( mmx );
	SUPPORT( popcnt );
	SUPPORT( sse );
	SUPPORT( sse2 );
	SUPPORT( sse3 );
	SUPPORT( ssse3 );
	SUPPORT( sse4.1 );
	SUPPORT( sse4.2 );
	SUPPORT( avx );
	SUPPORT( avx2 );

	return 0;
}

