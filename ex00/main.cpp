#include "ScalarConverter.hpp"
#include <iostream>
#include <string>

// int	main(int argc, char *argv[]) {
// 	if (argc != 2)
// 	{
// 		std::cout << "Wrong number of arguments" << std::endl;
// 		return (1);
// 	}
// 	static ScalarConverter scalar(argv[1]);
// 	scalar.convert();
// 	return (0);
// }

int	main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	// std::cout << "char: " << static_cast<char>(std::stol(argv[1])) << std::endl;
	std::cout << "int: " << static_cast<int>(std::stol(argv[1])) << std::endl;
	std::cout << "float: " << static_cast<float>(std::stol(argv[1])) << std::endl;
	std::cout << "double: " << static_cast<double>(std::stol(argv[1])) << std::endl;
	return 0;
}
