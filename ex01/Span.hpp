//Span.hpp CPP02   ex00

#ifndef SPAN_HPP
# define SPAN_HPP

#include <ostream>

class Span {

	public:

		Span( unsigned int const n );
		Span( Span const & src );	//Canonique	
		~Span( void );				//Canonique	

		Span &	operator=( Span const & rhs );//Canonique

		int			getFoo( void ) const;


	private:

		int 		_foo;
		Span( void );					//Canonique

};

std::ostream &		operator<<( std::ostream & o, Span const & i );

#endif
