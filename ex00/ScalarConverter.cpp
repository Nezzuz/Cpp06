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
	bridge(arg);
}

