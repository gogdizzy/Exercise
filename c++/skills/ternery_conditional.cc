/*
@Author gogdizzy
@Date 2015-09-11
@Desc use a function simulate ternery conditional
	should compile with option with -std=c++11
*/


/*
template< typename T >
T&  quest( bool cond, T& true_val, T& false_val ) {
    if( cond ) return true_val;
    return false_val;
}

template< typename T >
T  quest( bool cond, const T true_val, const T false_val ) {
    if( cond ) return true_val;
    return false_val;
}
*/
/*
template < typename T >
T& quest( bool cond, T&& true_val, T&& false_val ) {
	if( cond ) return true_val;
	return false_val;
}
*/

template < typename T >
T quest( bool cond, T&& true_val, T&& false_val ) {
	if( cond ) return true_val;
	return false_val;
}

template < typename T >
T quest( bool cond, T& true_val, T&& false_val ) {
	if( cond ) return true_val;
	return false_val;
}

template < typename T >
T quest( bool cond, T&& true_val, T& false_val ) {
	if( cond ) return true_val;
	return false_val;
}

void test0() {
	int i = 0, j = 0, k;
	( i > 0 ? i : j ) = 3;  // ok
	( i > 0 ? i : 2 ) = 3;  // error
	( i > 0 ? 1 : j ) = 3;  // error
	( i > 0 ? 1 : 2 ) = 3;  // error
	k = ( j > 0 ? i : j );  // ok
	k = ( j > 0 ? i : 2 );  // ok
	k = ( i > 0 ? 1 : j );  // ok
	k = ( i > 0 ? 1 : 2 );  // ok
}

void test1() {
	int i = 0, j = 0, k;
	quest( i > 0, i, j ) = 3;  // ok
	quest( i > 0, i, 2 ) = 3;  // error
	quest( i > 0, 1, j ) = 3;  // error
	quest( i > 0, 1, 2 ) = 3;  // error
	k = quest( j > 0, i, j );  // ok
	k = quest( j > 0, i, 2 );  // ok
	k = quest( i > 0, 1, j );  // ok
	k = quest( i > 0, 1, 2 );  // ok
}

int main() {
	return 0;
}
