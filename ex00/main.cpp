#include <iostream>
#include <stdexcept>

void	converter(std::string arg)
{
	(void)arg;
}

int	main(int ac, char** av)
{
	try
	{
		if (ac != 2)
			throw std::runtime_error("Please introduce an argument to cast");
		return (converter(std::string(av[1])), 0);
	}
	catch (const std::exception& e)
	{
		std::cerr << "EXCEPTION: " << e.what() << std::endl;	
		return (1);
	}
}
