#include "ScalarConverter.hpp"
#include <cmath>
#include <iomanip>

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::printChar(double value) {
	std::cout << "char: ";
	if (std::isnan(value) || std::isinf(value)) {
		std::cout << "impossible" << std::endl;
	}
	else {
		char char_val = static_cast<char>(value);
		if (std::isprint(char_val)) {
			std::cout << "'" << char_val << "'" << std::endl;
		}
		else {
			std::cout << "Non displayable" << std::endl;
		}
	}
}

void ScalarConverter::printInt(double value) {
	std::cout << "int: ";
	if ((std::isnan(value) || std::isinf(value)) ||
		(value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())) {
		std::cout << "impossible" << std::endl;
	}
	else {
		int int_val = static_cast<int>(value);
		std::cout << int_val << std::endl;
	}
}

void ScalarConverter::printFloat(double value) {
	std::cout << "float: ";
	float float_val = static_cast<float>(value);
	if (std::isnan(value) || std::isinf(value)) {
		std::cout << std::showpos << float_val << "f" << std::endl;
		return ;
	}
	if (float_val == static_cast<int>(float_val)) {
		std::cout << float_val << ".0f" << std::endl;
	}
	else {
		std::cout << std::setprecision(std::numeric_limits<float>::digits10) << float_val << "f" << std::endl;;
	}
}

void ScalarConverter::printDouble(double value) {
	std::cout << "double: ";
	double double_val = static_cast<double>(value);
	if (std::isnan(value) || std::isinf(value)) {
		std::cout << std::showpos << double_val << std::endl;
		return ;
	}
	if (double_val == static_cast<int>(double_val)) {
		std::cout << double_val << ".0" << std::endl;
	}
	else {
		std::cout << std::setprecision(std::numeric_limits<float>::digits10) << double_val << std::endl;;
	}
}

void ScalarConverter::convert(const std::string& input) {
	double value;
	if (input.length() == 1 && isprint(input[0])) {
		value = static_cast<double>(input[0]);
	}
	else {
		char *ptr = NULL;
		value = std::strtod(input.c_str(), &ptr);
		if (value == 0.0 &&
			(input[0] != '-' && input[0] != '+' && !std::isdigit(input[0])) &&
			(*ptr && std::strcmp(ptr, "f"))) {
			throw std::bad_alloc();
			return ;
		}
	}
	printChar(value);
	printInt(value);
	printFloat(value);
	printDouble(value);
}
