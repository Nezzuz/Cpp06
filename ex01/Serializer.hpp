#pragma once

#include <iostream>
#include "Data.hpp"

struct Serializer
{
	Serializer(void);
	Serializer(const Serializer& copy);
	Serializer& operator = (const Serializer& copy);
	~Serializer();
	unsigned long	serialize(Data* ptr);
	Data*		deserialize(unsigned long raw);
};

