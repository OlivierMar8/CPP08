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

	if ( _nb < _max_nb) {
		_tab.push_back(a);
		++_nb;
	}
	else
		throw std::exception();
	return;
}



std::ostream &	operator<<( std::ostream & o, Span const & src) {

	for (size_t i = 0; i < src.getTab().size(); i++) {
		o << src.getTab()[i];
		if ( i < (src.getTab().size() - 1))
				o << " / ";
		}	

	return o;
}
