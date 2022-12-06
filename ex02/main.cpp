//main.cpp	CPP08	ex02

#include <iostream>
#include <string>
#include <cstdlib>
#include "Span.hpp"



int	main( void ) {

	Span	b(9);

	b.addNumber(102);
	try {
		std::cout << "b longest span: " 
		<< b.longestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
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
	try {
		std::cout << "b longest span: " 
		<< b.longestSpan() << std::endl;
		std::cout << "v longest span: " 
		<< v.longestSpan() << std::endl;
		std::cout << "b shortest span: " 
		<< b.shortestSpan() << std::endl;
		std::cout << "v shortest span: " 
		<< v.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	Span	tt(25);
	tt.addNumber(6);
	tt.addNumber(3);
	tt.addNumber(17);
	std::cout << " tt " << tt << std::endl;

	std::vector<int> cc;
	for (int i = 0; i < 10; i++)
		cc.push_back(i - 30);
	try {
		tt.addManyNumbers(cc);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "tt " << tt << std::endl;

	Span	big(15000);
	std::srand(time(0));
	for (int i = 0; i < 15000; i++)
		big.addNumber(std::rand() % 2000000);
	try {
		std::cout << "big longest span: " 
		<< big.longestSpan() << std::endl;
		std::cout << "big shortest span: " 
		<< big.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}




	std::cout << "Fin du test" << std::endl;
	return 0;

}
/*
int	main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}
*/
