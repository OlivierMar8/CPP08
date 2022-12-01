//main.cpp	CPP08	ex00

#include <iostream>
#include <vector>
#include <queue>
#include "Array.hpp"
#include "easyfind.hpp"

int	main( void ) {

	std::vector<int> tab_int { 11, 22, 33, 44, 55, 66, 77, 88, 99 };
	std::vector<char> tab_char { 'a', 'f', 'b', 'y', '(', '9' };

	std::boolalpha
	std::cout << easyfind<int>(tab_int, 44);
	return 0;
}

