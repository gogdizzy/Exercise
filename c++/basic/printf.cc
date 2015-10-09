/*
@Author gogdizzy
@Date 2015-09-11
@Desc about printf
	should compile with option -trigraphs
@Ref
	http://en.cppreference.com/w/cpp/language/operator_alternative
*/
%:include <stdio.h>
#include <stdint.h>

void test_trigraphs() <%
	printf( "============ test_trigraphs ============\n\n" );
	printf( "??<??>\n" );
%>

void test_simple() {
	printf( "\n============ test_simple ============\n\n" );

	double pi = 3.14;
	printf( "pi = %10.3f\n", pi );
	int i = 10, j = 20;
	printf( "i = %d j = %05d\n", i, j );

}

void test_int() {
	printf( "\n============ test_int ============\n\n" );

}

void test_others() {
	printf( "\n============ test_others ============\n\n" );

	int x = 0;
	printf( "helloworld%n", &x ); printf( " have %d letters\n", x );
	printf( "x = %*d\n", 4, x );
	printf( "%2$*1$d\n", 3, 4 );
}

int main() {

	test_trigraphs();

	test_simple();

	test_int();

	test_others();	

	return 0;
}
