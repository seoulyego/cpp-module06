#include "Base.hpp"
#include <cstdlib>
#include <iostream>

/*
void i_wanna_go_home(void) {
	system("leaks identify_type");
}
*/

int main(void) {
	// atexit(i_wanna_go_home);
	Base *base = generate();

	identify(base);
	identify(*base);
	delete base;
	return 0;
}
