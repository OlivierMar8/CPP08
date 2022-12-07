//main.cpp	CPP08	ex02

#include <iostream>
#include <string>
#include <list>
#include "MutantStack.hpp"

int	main( void ) {

	{
		std::cout << "\tTest MutantStack" << std::endl;
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "Stack mstack size: " << mstack.size() << std::endl;


		mstack.push(3);
		mstack.push(7);
		mstack.push(737);
		mstack.push(478);
		mstack.push(-10);
		mstack.push(963);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while ( it != ite )
		{
			std::cout << *it << std::endl;
				++it;
		}
		std::stack<int> s(mstack);

		s.pop();
		std::cout << "stack s top: " << s.top() << std::endl;
	}
	{
		std::cout << "\tTest list" << std::endl;
		std::list<int>	mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << "list mstack size: " << mstack.size() << std::endl;


		mstack.push_back(3);
		mstack.push_back(7);
		mstack.push_back(737);
		mstack.push_back(478);
		mstack.push_back(-10);
		mstack.push_back(963);
		mstack.push_back(0);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;
		while ( it != ite )
		{
			std::cout << *it << std::endl;
				++it;
		}
		std::list<int> s(mstack);

		s.pop_back();
		std::cout << "list s top: " << s.back() << std::endl;
	}

	return 0;
}
