//easyfind.hpp	CPP08	ex00
#ifndef EASYFIND_HPP

# include <algorithm>
# include <iterator>

# define EASYFIND_HPP

template<typename T>
bool	easyfind( T & cont, int n) {

	typename T::iterator it;
	it = std::find( cont.begin(), cont.end(), n);
	if (it != cont.end())
		return true;
	else
		return false;
}

#endif
