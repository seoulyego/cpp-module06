#include "Serializer.hpp"
#include <cstdlib>
#include <iostream>

/*
void i_wanna_go_home(void) {
	system("leaks serializer");
}
*/

int main(void) {
	// atexit(i_wanna_go_home);
	Data *data1 = new Data();
	data1->_data = "Hello World!";

	std::cout << "Data1: " << data1->_data << std::endl;

	uintptr_t raw = Serializer::serialize(data1);
	std::cout << "raw: " << raw << std::endl;

	Data *data2 = Serializer::deserialize(raw);
	std::cout << "Data2: " << data2->_data << std::endl;
	delete data1;
	return 0;
}
