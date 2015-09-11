/*
@Author gogdizzy
@Date 2015-09-11
@Desc about printf
	should compile with option -trigraphs
@Ref
	http://en.cppreference.com/w/cpp/language/operator_alternative
*/
%:include <stdio.h>

void test_trigraphs() <%
	printf( "??<??>\n" );
%>

void test_simple() {

}

void test_int() {

}

void test_others() {

	int x = 0;
	printf( "helloworld%n", &x ); printf( " have %d letters\n", x );

}

int main() {

	test_trigraphs();

	test_simple();

	test_int();

	test_others();	

	return 0;
}
