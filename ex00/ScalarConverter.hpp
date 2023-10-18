#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <stdbool.h>

enum e_type {
	CHAR = 1,
	INT = 2,
	FLOAT = 4,
	DOUBLE = 8,
	IMPOSSIBLE,
	NONDISPLAYABLE
};

class ScalarConverter {
	private:
		std::string	_input;
		int			_type;
		char		_char;
		int			_int;
		float		_float;
		double		_double;

		bool		_isChar;
		bool		_isInt;
		bool		_isFloat;
		bool		_isDouble;
		bool		_isImpossible;
		bool		_isNonDisplayable;
		ScalarConverter();
		ScalarConverter(ScalarConverter const& obj);
		ScalarConverter & operator=(ScalarConverter const& obj);

	public:
		ScalarConverter(const std::string input);
		~ScalarConverter();

		static std::string		getInput();
		static char			getChar();
		static int				getInt();
		static float			getFloat();
		static double			getDouble();
		static void			checkType();
		static void			convert();
		static void			printChar();
		static void			printInt();
		static void			printFloat();
		static void			printDouble();
};

#endif  // SCALARCONVERTER_HPP
