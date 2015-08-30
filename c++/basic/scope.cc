#include <stdio.h>

int x = 1;

namespace sp1 {
	int x = 2;
	namespace sp2 {
		int x = 3;
	}
}

int main() {

	int x = 100;
	printf( "x = %d\n", x );
	printf( "::x = %d\n", ::x );
	printf( "sp1::x = %d\n", sp1::x );
	printf( "sp1::sp2::x = %d\n", sp1::sp2::x );

	return 0;
}
