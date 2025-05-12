#pragma once

#include <iostream>
#include <exception>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter& operator = (const ScalarConverter& copy);
		~ScalarConverter();
		void	convert(std::string arg);
};
