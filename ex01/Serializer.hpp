#ifndef SERIALIZER_H
# define SERIALIZER_H

# include <string>

typedef struct Data {
	std::string	_data;
}	Data;

class Serializer {
	private:
		Serializer();
		Serializer(const Serializer &src);
		~Serializer();
		Serializer &operator=(const Serializer &rhs);

	public:
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
};

#endif // SERIALIZER_H
