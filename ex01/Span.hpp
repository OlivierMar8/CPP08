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

		int					getMaxNb( void ) const;
		std::vector<int>	getTab( void ) const;
		void				addNumber( int const a); 
		void				addManyNumbers(std::vector<int> src);
		int					shortestSpan( void ) const;
		int					longestSpan( void ) const;
   		void           		printElements(void) const;
		void    			printVec(std::vector<int> & vec) const;

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
		std::vector<int>	_tab;

		Span( void );		//Canonique
        static void			printElement(int const & number);
};

std::ostream &		operator<<( std::ostream & o, Span const & i );

#endif
