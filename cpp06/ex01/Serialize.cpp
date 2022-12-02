#include "Serialize.hpp"

// Elle prend un pointeur
//  et convertit celui-ci vers uintptr_t (type d’entier non-signé)
uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

// Elle prend un entier non-signé en paramètre et le convertit en pointeur sur Data.
Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
