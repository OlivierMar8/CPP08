//main.cpp	CPP08	ex01

#include <iostream>
#include <string>
#include "Span.hpp"



int	main( void ) {

	Span	b(9);

	b.addNumber(102);
	b.addNumber(100);
	b.addNumber(96);
	std::cout << "b " << b << std::endl;
	b.addNumber(13);
	b.addNumber(11);
	b.addNumber(18);
	Span v(b);
	std::cout << "v " << v << std::endl;

	b.addNumber(39);
	b.addNumber(-10);
	
	std::cout << "b " << b << std::endl;
	std::cout << "v " <<v << std::endl;
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
	std::cout << "b longest span: " 
	<< b.longestSpan() << std::endl;
	std::cout << "v longest span: " 
	<< v.longestSpan() << std::endl;
	std::cout << "b shortest span: " 
	<< b.shortestSpan() << std::endl;
	std::cout << "v shortest span: " 
	<< v.shortestSpan() << std::endl;

	std::cout << "Fin du test" << std::endl;
	return 0;

}

