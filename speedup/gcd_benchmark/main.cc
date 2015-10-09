#include "gcd_benchmark.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define MAXN 5000000
int a[MAXN];

int main() {
	
	srand( time( 0 ) );
	int g;
	for( int i = 0; i < MAXN; ++i ) a[i] = rand();

#ifdef _GCD_RECURSIVE
	for( int i = 1; i < MAXN; ++i ) g = gcd_recursive( a[i-1], a[i] );
#endif
	
#ifdef _GCD_ITERATIVE
	for( int i = 1; i < MAXN; ++i ) g = gcd_iterative( a[i-1], a[i] );
#endif
#ifdef _GCD_BINARY
	for( int i = 1; i < MAXN; ++i ) g = gcd_binary( a[i-1], a[i] );
#endif
#ifdef _GCD_BINARY_BUILTIN
	for( int i = 1; i < MAXN; ++i ) g = gcd_binary_builtin( a[i-1], a[i] );
#endif
#ifdef _GCD_BINARY_RECUR
	for( int i = 1; i < MAXN; ++i ) g = gcd_binary_recur( a[i-1], a[i] );
#endif

	return 0;
}
