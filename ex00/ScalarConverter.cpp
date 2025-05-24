#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	*this = copy;
}

ScalarConverter& ScalarConverter::operator = (const ScalarConverter& copy)
{
	if (this != &copy)
	{
		/* There aren't attributes to copy */
	}
	return (*this);
}

ScalarConverter::~ScalarConverter() {}

template <typename T>
static void	tochar(T& value)
{
	(void)value;
}

template <typename T>
static void	toint(T& value)
{
	(void)value;
}

template <typename T>
static void	tofloat(T& value)
{
	(void)value;
}

template <typename T>
static void	todouble(T& value)
{
	(void)value;
}

template <typename T>
static void	bridge(T& value)
{
	tochar(value);	
	toint(value);	
	tofloat(value);	
	todouble(value);	
}

void	ScalarConverter::convert(std::string arg)
{
	char *endptr;

	errno = 0;
	int i = std::strtol(arg.c_str(), &endptr, 10);
	if (errno == 0 && endptr[0] == '\0')
		return (bridge(i));

	char c = arg[0];
	if (arg[0] != '\0')
		return (bridge(c));

	errno = 0;
	float f = std::strtof(arg.c_str(), &endptr);
	if (errno == 0 && endptr[0] == 'f' && endptr[1] == '\0')
		return (bridge(f));

	errno = 0;
	double d = std::strtod(arg.c_str(), &endptr);
	if (errno == 0 && endptr[0] == '\0')
		return (bridge(d));

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

