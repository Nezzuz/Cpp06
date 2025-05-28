#include "Serializer.hpp"

int main(void)
{
	Data data;
	data.index = 1;
	data.content = "I wanna be serialized and deserialized";

	Data* ptr = &data;
	Serializer serializer;
	unsigned long raw = serializer.serialize(ptr);

	std::cout << "Data original:" << std::endl;
	std::cout << "Index: " << data.index << std::endl;
	std::cout << "Content: " << data.content << std::endl;

	ptr = serializer.deserialize(raw);

	std::cout << "Después de deserializar:" << std::endl;
	std::cout << "Index: " << ptr->index << std::endl;
	std::cout << "Content: " << ptr->content << std::endl;

	return (0);
}

