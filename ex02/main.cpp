#include "Base.hpp"

int main(void)
{
	Base *gen = generate();

	identify(gen);
	identify(*gen);
	
	delete gen;
	return (0);
}

