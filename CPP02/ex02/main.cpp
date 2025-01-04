#include <iostream>

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	Fixed c(-2.5f);
	Fixed f(2.5f);
	Fixed d(5.2f);
	std::cout << "c: " << c << ", f: " << f << ", d: " << d << std::endl
		  << "f + c: " << f + c << std::endl
		  << "d * c: " << d * c << std::endl
		  << "c / d: " << c / d << std::endl
		  << "c - d: " << c - d << std::endl
		  << "c < d: " << (c < d) << std::endl
		  << "c < f: " << (c < f) << std::endl
		  << "d < f: " << (d < f) << std::endl
		  << std::endl;
	return 0;
}
