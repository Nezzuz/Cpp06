#include "Base.hpp"

Base::~Base() {}

Base*	generate(void)
{
	std::srand(std::time(0));
	
	char Num = std::rand() % 3;
	
	if (Num == 0)
		return (new A());
	if (Num == 1)
		return (new B());
	return (new C());
}

void	identify(Base* p)
{
	std::cout << "Pointer: ";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	std::cout << "Reference: ";
	try
	{
		p = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) {}

	try
	{
		p = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) {}

	try
	{
		p = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) {}
}

