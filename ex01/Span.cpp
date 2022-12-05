//Span.cpp    CPP08    ex01

#include <iostream>
#include "Span.hpp"

Span::Span( void ) : _max_nb( 0 ), _nb ( 0 ) {

	return;
}

Span::Span( unsigned int const n ) : _max_nb( n ), _nb ( 0 ) {

	return;
}

Span::Span( Span const & src ) {
	*this = src;
	return;
}

Span::~Span( void ) {

		return;
}

Span &	Span::operator=( Span const & rhs) {

		if ( this != &rhs )
		{
			this->_nb = rhs.getNb();
		 	this->_max_nb = rhs.getMaxNb();	
			this->_tab = rhs.getTab();
		}
		return *this;
}

int	Span::getMaxNb( void ) const {

		return this->_max_nb;
}

int	Span::getNb( void ) const {

		return this->_nb;
}

std::vector<int> Span::getTab( void ) const {

	return this->_tab;
}

void	Span::addNumber( int const a) {

	if ( _tab.size()  < _max_nb) 
		_tab.push_back(a);
	else
		throw AddingException();
	return;
}

int	Span::shortestSpan( void )  {
	
	std::vector<int> s_sp(_tab);
	std::vector<int> result(_tab.size());	
	std::sort(s_sp.begin(), s_sp.end());
	std::adjacent_difference(s_sp.begin() + 1, s_sp.end(), result.begin());
	int  min_val = *std::min_element(_tab.begin(), _tab.end());
	return min_val;

}

int	Span::longestSpan( void ) const {

	int  min_val = *std::min_element(_tab.begin(), _tab.end());
	int  max_val = *std::max_element(_tab.begin(), _tab.end());

	return ( max_val - min_val);	
}

const char *	Span::AddingException::what () const throw() {
	return ("Error adding int : stack has no place left !");
	
}

const char *	Span::DistException::what () const throw() {
	return ("Error calculating distance : only 1 or no number in the stack !");
}

std::ostream &	operator<<( std::ostream & o, Span const & src) {

	for (size_t i = 0; i < src.getTab().size(); i++) {
		o << src.getTab()[i];
		if ( i < (src.getTab().size() - 1))
				o << " / ";
		}	

	return o;
}
