#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>

Base::~Base() {}

Base	*generate(void) {
	std::srand(time(0));
	switch (rand() % 3) {
		case 0:
			return new A;
			break ;
		case 1:
			return new B;
			break ;
		case 2:
			return new C;
			break ;
		default:
			return NULL;
	}
}

void	identify(Base *p) {
	std::cout << "identify(Ptr): ";

	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p) {
	std::cout << "identify(Ref): ";

	try {
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		static_cast<void>(a);
	} catch (std::exception& e) {}
	try {
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		static_cast<void>(b);
	} catch (std::exception& e) {}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		static_cast<void>(c);
	} catch (std::exception& e) {}
}
