#ifndef CAT_H
#define CAT_H
#include <string>
#include "Animal.h"

class Cat : public Animal {
	public:
		Cat(std::string name, double weight);

		std::string makeNoise() const override;
		std::string eat() const  override;
		void chaiseMouse() const;

};

#endif // !CAT_H
