#include <stdio.h>

int main() {

	int x = 100;
	const int cx = 111;
	double d = 3.14;

	int &r1 = x; // ok
	int &r2 = 200; // err, must be a object that can be change
	int &r3 = cx; // err, from const to non-const
	int &r4 = d; // err, type mismatch

	const int &r5 = x; // ok
	const int &r6 = 200; // ok
	const int &r7 = cx; // ok
	const int &r8 = d; // ok, use a const int tmp

	return 0;
}
