#include "Serializer.hpp"
#include <iostream>

int main(void) {
	Data *data1 = new Data();
	data1->_data = "Hello World!";

	std::cout << "Data1: " << data1->_data << std::endl;

	uintptr_t raw = Serializer::serialize(data1);
	std::cout << "raw: " << raw << std::endl;

	Data *data2 = Serializer::deserialize(raw);
	std::cout << "Data2: " << data2->_data << std::endl;
	return 0;
}
