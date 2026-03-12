#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal {
	public:
		Animal(std::string name, double weight);
		std::string getName() const ;
		void setName(std::string name);
		double getWeight() const ;
		void setWeight(double weight);
		std::string makeNoise();
	private:
		std::string name;
		double weight;
};

#endif // !ANIMAL_H
