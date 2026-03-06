
#ifndef DOG_H
#define DOG_H
#include <string>
#include <stdexcept>
class Dog {
	public:
		Dog(std::string breed);
		std::string getBreed() const ;
	private:
		std::string breed;
};

#endif // !1
