//main.cpp	CPP08	ex01

#include <iostream>
#include <string>
#include "Span.hpp"


int	main( void ) {

	Span	b(2);

	b.addNumber(10);

	try {
		b.addNumber(20);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		b.addNumber(30);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}

