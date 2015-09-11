#include <stdlib.h>
#include <iostream>
#include <typeinfo>
using namespace std;

#ifdef __linux__
  #include <cxxabi.h>
  #define  print_type( x ) do { \
	int  status; \
	char *realname = abi::__cxa_demangle( typeid( x ).name(), 0, 0, &status ); \
	cout << "type of " << #x << " is " << realname << endl; \
	free( realname ); \
  } while(0)
#else
  #define  print_type( x )  do { \
	cout << "type of " << #x << " is " << typeid( x ).name() << endl; \
  } while(0)
#endif

int main() {

	int  i = 0, j = 0, k = 0;
	int &r1 = k;
	int &r2 = r1;

	print_type( (i) );
	print_type( k );
	print_type( r1 );
	print_type( r2 );
	print_type( free );

	return 0;
}
