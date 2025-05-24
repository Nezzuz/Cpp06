#pragma once

#include <iostream>
#include <exception>
#include <cstdlib>
#include <iomanip>
#include <cerrno>
#include <limits>
#include <cmath>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter& operator = (const ScalarConverter& copy);
		~ScalarConverter();
		void	convert(std::string arg);
};
