#include "math.h"
#include <iostream>

int main( void ) {
	int a = 2;
	int b = 3;
	const int e = 2;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( e, b ) = " << ::min( e, b ) << std::endl;
	std::cout << "max( e, b ) = " << ::max( e, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	const std::string	f="chaine1";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( f, d ) = " << ::min( f, d ) << std::endl;
	std::cout << "max( f, d ) = " << ::max( f, d ) << std::endl;

	return 0;
}
