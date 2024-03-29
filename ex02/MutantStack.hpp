//MutantStack.hpp CPP08   ex02

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <ostream>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T> {

	public:

		MutantStack( void ) { }	
		MutantStack( MutantStack const & src ) : std::stack<T>(src) { *this = src; }
		~MutantStack( void ) { return; }

		MutantStack &	operator=( MutantStack const & rhs ) {
			if (*this != rhs)
				this->c = rhs.c;
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
			
		iterator begin () {
			return this->c.begin();
		}

		iterator end () {
			return this->c.end();
		}
};

#endif
