#ifndef DOG_H
#define DOG_H
#include "Animal.h"
#include <string>
class Dog : public Animal {
	public:
		Dog(std::string name, double weight, std::string breed);
		std::string getBreed() const ;
		void digHole() const ;
	    std::string makeNoise()const;
		void catchCat() const;
	private:
		std::string breed;
};

#endif // !DOG_H
