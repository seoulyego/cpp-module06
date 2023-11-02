#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>

class ScalarConverter {
	public:
		static void convert(const std::string& input);

	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& obj);
		ScalarConverter& operator=(const ScalarConverter& obj);
		~ScalarConverter();
};

#endif  // SCALARCONVERTER_HPP
