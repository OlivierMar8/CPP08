//main.cpp	CPP08	ex02

#include <iostream>
#include <string>
#include "MutantStack.hpp"

int	main( void ) {

	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top();

	mstack.pop();

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
//	mstack.push(5);
//	mstack.push(5);
//	mstack.push(5);

	return 0;
}
