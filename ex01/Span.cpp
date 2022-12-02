//Span.cpp    CPP08    ex01

#include <iostream>
#include "Span.hpp"

Span::Span( void ) {

	return;
}

Span::Span( unsigned int const n ) : _max_nb( n ), _nb ( 0 ) {

	return;
}

Span::Span( Span const & src ) : _max_nb( src.getMaxNb()) {
	*this = src;
	return;
}

Span::~Span( void ) {

		return;
}

int		Span::getMaxNb( void ) const {

		return this->_max_nb;
}

int		Span::getNb( void ) const {

		return this->_nb;
}
/*
std::vector<int> & Span::getTab( void ) const {

	return this->_tab;
}
*/
void	Span::addNumber( int const a) {

	if ( _nb < _max_nb) {
		_tab.push_back(a);
		++_nb;
	}
	else
		throw std::exception();
	return;
}


Span &	Span::operator=( Span const & rhs) {
//pas OK

		if ( this != &rhs )
		{
			this->_nb = rhs.getNb();
		//	this->_tab = rhs.getTab();
		}
		return *this;
}
/*
std::ostream &	operator<<( std::ostream & o, Span const & i) {

	o << "The value of _foo is : " << i.getFoo();

	return o;
}
*/
