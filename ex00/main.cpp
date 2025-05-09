#include <iostream>

int	main(int ac, char** av)
{
	if (ac != 2)
		return (1);
	std::cout << "char: " << static_cast<int>(*av[1]) << std::endl;
	/* std::cout << "int: " << xxx << std::endl; */
	/* std::cout << "float: " << xxx << std::endl; */
	/* std::cout << "double: " << xxx << std::endl; */
	return (0);
}
