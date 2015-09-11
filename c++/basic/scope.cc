#include <stdio.h>

int x = 1;

namespace sp1 {
	int x = 2;
	namespace sp2 {
		int x = 3;
	}
}

void test1() {

	int x = 100;
	printf( "x = %d\n", x );
	printf( "::x = %d\n", ::x );
	printf( "sp1::x = %d\n", sp1::x );
	printf( "sp1::sp2::x = %d\n", sp1::sp2::x );
}

class C1 {
public:
	friend void foo() { /* here is definition */ }
	void memfoo();
};
void foo(); /* must have this declaration */
void C1::memfoo() { foo(); }

void test2() {
	C1 c;
}

int main() {

	test1();
	test2();
	return 0;
}
