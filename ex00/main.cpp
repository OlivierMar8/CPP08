//main.cpp	CPP08	ex00

#include <iostream>
#include <vector>
#include <queue>
#include "Fixed.hpp"
#include "easyfind.hpp"

int	main( void ) {

	std::vector<int> tab_int ;
	for (int i = 0; i < 9;i++)
		tab_int.push_back(i * 11);
//	std::vector<char> tab_char { 'a', 'f', 'b', 'y', '(', '9' };

	std::cout <<	std::boolalpha << easyfind(tab_int, 44);
	return 0;
}

