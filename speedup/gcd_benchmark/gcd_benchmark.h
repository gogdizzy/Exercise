/*
@author gogdizzy
@date   2015-09-07
@desciption 测试gcd的各种实现的速度对比
@resource
	https://hbfs.wordpress.com/2013/12/10/the-speed-of-gcd/
*/


template <typename T>
T gcd_recursive( T a, T b ) {
	return b == 0 ? a : gcd_recursive( b, a % b );
}

template <typename T>
T gcd_iterative2( T a, T b ) {
	T t;
	while( b != 0 ) {
		t = a % b;
		a = b;
		b = t;
	}
	return a;
}

template <typename T>
T gcd_iterative( T a, T b ) {
	while( a != 0 ) {
		b %= a;
		if( b == 0 ) return a;
		a %= b;
	}
	return b;
}

// if a, b are even gcd( a, b ) = gcd( a/2, b/2 ) * 2
// if a is odd, b is even, gcd( a, b ) = gcd( a, b/2 )
// if a, b are odd, gcd( a, b ) = gcd( (a-b)/2, b )
template <typename T>
T gcd_binary( T a, T b ) {
	if( a == 0 ) return b;
	if( b == 0 ) return a;

	int k = 0;
	while( ((a | b) & 1) == 0 ) {
		a >>= 1;
		b >>= 1;
		++k;
	}

	while( (a & 1) == 0 ) a >>= 1;
	do {
		while( (b & 1) == 0 ) b >>= 1;
		if( a > b ) {
			T t = a;
			a = b;
			b = t;
		}
		b -= a;
	} while( b != 0 );
	return a << k;
}

template <typename T>
T gcd_binary_builtin( T a, T b ) {
	if( a == 0 ) return b;
	if( b == 0 ) return a;

	int k = __builtin_ctz( a | b );
	a >>=  __builtin_ctz( a );

	do {
		b >>=  __builtin_ctz( b );
		if( a > b ) {
			T t = a;
			a = b;
			b = t;
		}
		b -= a;
	} while( b != 0 );
	return a << k;
}

template <typename T>
T gcd_binary_recur( T a, T b ) {
	if( a == 0 ) return b;
	if( b == 0 ) return a;

	int k = 0;
	while( ((a | b) & 1) == 0 ) {
		a >>= 1;
		b >>= 1;
		++k;
	}
	return gcd_recursive( a, b ) << k;
}


