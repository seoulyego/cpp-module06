#include "Serializer.hpp"
#include <iostream>

int main(void) {
	Data *data1 = new Data();
	data1->_data = "Hello World!";

	std::cout << "Data: " << data1->_data << std::endl;
	uintptr_t raw = Serializer::serialize(data1);
	Data *data2 = Serializer::deserialize(raw);
	std::cout << "Data: " << data2->_data << std::endl;
	return 0;
}
