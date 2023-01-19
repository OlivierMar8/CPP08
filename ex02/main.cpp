//main.cpp	CPP08	ex02

#include <iostream>
#include <string>
#include <list>
#include "MutantStack.hpp"

int	main( void ) {

	{
		std::cout << "\tTest MutantStack int" << std::endl;
		MutantStack<int>	mstack;

		std::cout << "Is mstack empty ? "
		<< std::boolalpha << mstack.empty() << std::endl;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "Is mstack empty ? "
		<< std::boolalpha << mstack.empty() << std::endl;
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

		MutantStack<int> s(mstack);

		std::cout << "Is s empty ? "
		<< std::boolalpha << s.empty() << std::endl;
		s.pop();
		std::cout << "stack s top: " << s.top() << std::endl;
		std::cout  << std::endl;
	}
	{
		std::cout << "\tTest list" << std::endl;
		std::list<int>	mstack;

		std::cout << "Is list mstack empty ? "
		<< std::boolalpha << mstack.empty() << std::endl;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << "Is mstack empty ? "
		<< std::boolalpha << mstack.empty() << std::endl;

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
		std::cout  << std::endl;
	}

	{
		std::cout << "\tTest MutantStack string" << std::endl;
		MutantStack<std::string>	mstack;

		std::cout << "Is mstack empty ? "
		<< std::boolalpha << mstack.empty() << std::endl;

		mstack.push("element 1");
		mstack.push("element 17");

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "Is mstack empty ? "
		<< std::boolalpha << mstack.empty() << std::endl;
		std::cout << "Stack mstack size: " << mstack.size() << std::endl;


		mstack.push("element 3");
		mstack.push("element 7");

		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();

		++it;
		--it;
		while ( it != ite )
		{
			std::cout << *it << std::endl;
				++it;
		}

		MutantStack<std::string> s(mstack);

		std::cout << "Is s empty ? "
		<< std::boolalpha << s.empty() << std::endl;
		s.pop();
		std::cout << "stack s top: " << s.top() << std::endl;
	}
	return 0;
}
