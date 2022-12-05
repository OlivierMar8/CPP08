//main.cpp	CPP08	ex01

#include <iostream>
#include <string>
#include "Span.hpp"


int	main( void ) {

	Span	b(9);

	b.addNumber(10);
	b.addNumber(11);
	b.addNumber(12);
	b.addNumber(13);
	b.addNumber(14);
	b.addNumber(18);
	Span v(b);
	b.addNumber(39);
	b.addNumber(30);
	
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
	std::cout << b.longestSpan() << std::endl;
	std::cout << v.longestSpan() << std::endl;
	std::cout << "Fin du test" << std::endl;
	return 0;

}

