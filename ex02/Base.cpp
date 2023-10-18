#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>

Base::~Base() {}

Base	*generate(void) {
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
	std::cout << "identify(Pointer): ";

	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p) {
	std::cout << "identify(Reference): ";

	try {
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (std::exception& e) {}
	try {
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	} catch (std::exception& e) {}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	} catch (std::exception& e) {}
}
