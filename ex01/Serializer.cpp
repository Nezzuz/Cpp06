#include "Serilizer.hpp"

Serializer::Serializer(void) {}

Serializer::Serializer(const Serializer& copy)
{
	copy = *this;
}

Serilizer& Serializer::operator = (const Serializer& copy)
{
	if (this != &copy)
	{
		/* Nothing to copy */		
	}
	return (*this);
}

Serializer::~Serilizer(void) {}

uintptr_t	Serializer::serialize(Data* ptr)
{

}

Data*		Serializer::deserialize(uintptr_t raw)
{

}

