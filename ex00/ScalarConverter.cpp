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
char	tochar(T& value)
{
	(void)value;
	return ('\0');
}

template <typename T>
int	toint(T& value)
{
	(void)value;
	return (0);
}

template <typename T>
float	tofloat(T& value)
{
	(void)value;
	return (0.0f);
}

template <typename T>
double	todouble(T& value)
{
	(void)value;
	return (0.0);
}

void	ScalarConverter::convert(std::string arg)
{
	(void)arg;
}

