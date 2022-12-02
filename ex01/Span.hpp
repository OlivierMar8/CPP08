//Span.hpp CPP02   ex00

#ifndef SPAN_HPP
# define SPAN_HPP

#include <ostream>
#include <vector>

class Span {

	public:

		Span( unsigned int const n );
		Span( Span const & src );	//Canonique	
		~Span( void );				//Canonique	

		Span &	operator=( Span const & rhs );//Canonique

		int			getMaxNb( void ) const;
		int			getNb( void ) const;
//		std::vector<int> & getTab( void ) const;
		void		addNumber( int const a); 

	private:

		int					_max_nb;
		int					_nb;
		std::vector<int>	_tab;
		Span( void );					//Canonique

};

//std::ostream &		operator<<( std::ostream & o, Span const & i );

#endif
