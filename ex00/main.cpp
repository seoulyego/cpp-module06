#include "ScalarConverter.hpp"

int	main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "Wrong number of argument." << std::endl;
		return 1;
	}
	try {
		ScalarConverter::convert(argv[1]);
	} catch (std::exception& e) {
		std::cerr << "Fail to Convert" << std::endl;
		return 1;
	}
	return 0;
}
