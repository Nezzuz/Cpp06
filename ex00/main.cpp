#include "ScalarConverter.hpp"

int	main(int ac, char** av)
{
	ScalarConverter instance;

	try
	{
		if (ac != 2)
			throw std::runtime_error("Please introduce an argument to cast");
		return (instance.convert(std::string(av[1])), 0);
	}
	catch (const std::exception& e)
	{
		std::cerr << "EXCEPTION: " << e.what() << std::endl;	
		return (1);
	}
}
