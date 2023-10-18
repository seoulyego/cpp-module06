#include "ScalarConverter.hpp"
#include <iostream>

ScalarConverter::ScalarConverter(const std::string input) : _input(input) {}

ScalarConverter::ScalarConverter(ScalarConverter const &obj) : _input(obj.getInput()) {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &obj) {
	if (this != &obj)
		_input = obj._input;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

std::string ScalarConverter::getInput() const {
	return _input;
}

char ScalarConverter::getChar() const {
	return _char;
}

int	ScalarConverter::getInt() const {
	return _int;
}

float ScalarConverter::getFloat() const {
	return _float;
}

double ScalarConverter::getDouble() const {
	return _double;
}

void ScalarConverter::convert() {
	std::cout << "char: ";
	try {
		char c = static_cast<char>(std::stoi(_input));
		if (c < 32 || c > 126)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << c << "'" << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}

	std::cout << "int: ";
	try {
		int i = static_cast<int>(std::stoi(_input));
		std::cout << i << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}

	std::cout << "float: ";
	try {
		float f = static_cast<float> (std::stof(_input));
		std::cout << f;
		if (f - static_cast<int>(f) == 0) {
			std::cout << ".0";
		}
		std::cout << "f" << std::endl;
		} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
		}
}
