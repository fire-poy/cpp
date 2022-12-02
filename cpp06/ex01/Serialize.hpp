#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <stdint.h>
# include "Data.hpp"

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);

#endif