//MutantStack.hpp CPP08   ex02

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <ostream>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T> {

	public:

		MutantStack( void ) { }					//Canonique
//		MutantStack( int const n );
		MutantStack( MutantStack const & src ) { *this = src; }	//Canonique	
		~MutantStack( void ) { return; }				//Canonique	

		MutantStack &	operator=( MutantStack const & rhs );//Canonique

};

//std::ostream &		operator<<( std::ostream & o, MutantStack const & i );

#endif
