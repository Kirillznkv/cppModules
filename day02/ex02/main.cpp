#include "Fixed.hpp"

int		main(void) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	//my
	Fixed my1(1.1f), my2(2.2f);
	std::cout<<my1<<" < "<<my2<<" -> ("<<(my1 < my2)<<")"<<std::endl;
	std::cout<<my1<<" <= "<<my2<<" -> ("<<(my1 <= my2)<<")"<<std::endl;
	std::cout<<my1<<" == "<<my2<<" -> ("<<(my1 == my2)<<")"<<std::endl;
	std::cout<<my1<<" != "<<my2<<" -> ("<<(my1 != my2)<<")"<<std::endl;
	std::cout<<my1<<" > "<<my2<<" -> ("<<(my1 > my2)<<")"<<std::endl;
	std::cout<<my1<<" >= "<<my2<<" -> ("<<(my1 >= my2)<<")"<<std::endl;
	std::cout<<my1<<" + "<<my2<<" -> ("<<(my1 + my2)<<")"<<std::endl;
	std::cout<<my1<<" * "<<my2<<" -> ("<<(my1 * my2)<<")"<<std::endl;
	return 0;
}
