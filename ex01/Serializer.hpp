#pragma once

#include <iostream>

struct Serializer
{
	Serializer(void);
	Serializer(const Serializer& copy);
	Serializer& operator = (const Serializer& copy);
	~Serializer();
	uintptr_t	serialize(Data* ptr);
	Data*		deserialize(uintptr_t raw);
};

struct	Data
{
	int		index;
	std::string	content;
};

