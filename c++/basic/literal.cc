#include <stdio.h>

int main() {

	char c = 'abcd';
	printf( "char c = 'abcd', c = %c\n", c );

	int i = 'abcd';
	printf( "int i = 'abcd', i = %d(0x%x)\n", i, i );
	i = 'abcde';
	printf( "int i = 'abcde', i = %d(0x%x)\n", i, i );
	i = 'abc';
	printf( "int i = 'abc', i = %d(0x%x)\n", i, i );

	float f = 'abc';
	printf( "float f = 'abc', f = %f(0x%x)\n", f, *(int*)&f );
	f = 'abcd';
	printf( "float f = 'abcd', f = %f(0x%x)\n", f, *(int*)&f );

	return 0;
}
