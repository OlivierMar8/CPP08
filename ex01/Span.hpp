//Span.hpp CPP02   ex00

#ifndef SPAN_HPP
# define SPAN_HPP

#include <ostream>
#include <vector>
#include <algorithm>
#include <numeric>

class Span {

	public:

		Span( unsigned int const n );
		Span( Span const & src );	//Canonique	
		~Span( void );				//Canonique	

		Span &	operator=( Span const & rhs );//Canonique

		int			getMaxNb( void ) const;
		int			getNb( void ) const;
		std::vector<int> getTab( void ) const;
		void		addNumber( int const a); 
		int			shortestSpan( void ) ;//const;
		int			longestSpan( void ) const;

		class AddingException : public std::exception {
			public:
				virtual const char * what() const throw();
		};

		class DistException : public std::exception {
			public:
				virtual const char * what() const throw(); 
		};

	private:

		unsigned int		_max_nb;
		int					_nb; //utile ??
		std::vector<int>	_tab;

		Span( void );					//Canonique

};

std::ostream &		operator<<( std::ostream & o, Span const & i );

#endif
