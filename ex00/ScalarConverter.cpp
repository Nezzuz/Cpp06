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
	if (std::isnan(value) || value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(static_cast<char>(value)) == false)
		std::cout << "char: non printable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(value) << std::endl;
}

template <typename T>
static void	toint(T& value)
{
	if (std::isnan(value) || value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
}

template <typename T>
static void	tofloat(T& value)
{
	float f = static_cast<float>(value);

	if (std::isinf(f) || std::isnan(f))
		std::cout << "float: " << f << "f" << std::endl;
	else if (value < -std::numeric_limits<float>::max() || value > std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
}

template <typename T>
static void	todouble(T& value)
{
	double d = static_cast<double>(value);

	if (std::isinf(d) || std::isnan(d))
		std::cout << "double: " << d << std::endl;
	else if (value < -std::numeric_limits<double>::max() || value > std::numeric_limits<double>::max())
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
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

