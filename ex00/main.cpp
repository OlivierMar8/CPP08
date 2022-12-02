//main.cpp	CPP08	ex00

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "Fixed.hpp"
#include "easyfind.hpp"

int	main( void ) {

	std::cout << " easy find in a vector of int " << std::endl;
	std::vector<int> tab_int ;
	for (int i = 0; i < 9;i++)
		tab_int.push_back(i * 11);

	std::cout <<	std::boolalpha << "44: " << easyfind(tab_int, 44) << std::endl;
	std::cout <<	std::boolalpha << "45: " << easyfind(tab_int, 45) << std::endl;
	std::cout <<	std::boolalpha << "40: " << easyfind(tab_int, 40) << std::endl;

	std::cout << " easy find in a list of int "<< std::endl;
	std::list<int> list_int ;
	for (int i = 0; i < 6;i++)
		list_int.push_back(i * 5.02f);

	std::cout <<	std::boolalpha << "44.0f " << easyfind(list_int, 44.0f) << std::endl;
	std::cout <<	std::boolalpha << "45.08f: " << easyfind(list_int, 45.08f) << std::endl;
	std::cout <<	std::boolalpha << "25.1f: " << easyfind(list_int, 25.1f) << std::endl;

	return 0;
}

