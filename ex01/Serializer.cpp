#include "Serializer.hpp"

Serializer::Serializer(void) {}

Serializer::Serializer(const Serializer& copy)
{
	(void)copy;
}

Serializer& Serializer::operator = (const Serializer& copy)
{
	(void)copy;
	return (*this);
}

Serializer::~Serializer(void) {}

unsigned long	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<unsigned long>(ptr));
}

Data*		Serializer::deserialize(unsigned long raw)
{
	return (reinterpret_cast<Data*>(raw));
}

