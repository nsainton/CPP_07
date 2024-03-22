#include "math.h"
#include <iostream>

int main( void ) {
	int a = 3;
	int b = 2;
	const int e = 2;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( e, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( e, b ) << std::endl;

	std::string d = "Chaine1";
	std::string c = "chaine21";
	const std::string	f="Chaine1";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( f, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( f, d ) << std::endl;

	return 0;
}
