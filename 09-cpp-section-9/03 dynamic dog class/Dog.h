#ifndef DOG_H
#define DOG_H
#include<string>

class Dog {
    public:
        Dog(std::string name, std::string breed);
        std::string getName();
        std::string getBreed();
    private:
        std::string name;
        std::string breed;
};

#endif // !DOG_H
