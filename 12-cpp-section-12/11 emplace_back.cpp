#include<iostream>
#include<string>
#include<vector>


class Person {

public:
	std::string name;
	int age;

	Person(std::string name, int age) :name(name), age(age) {
		std::cout << "constructed  " << name << std::endl;
	}
	Person(const Person& other) {
		name = other.name;
		age = other.age;
		std::cout << "copied : " << name << std::endl;
	}

};

int main() {


	std::vector<Person> people;

	std::cout << "\nUsing push back ...... " << std::endl;
	Person p1("nameA", 30);
	people.push_back(p1);


	std::cout << "\nUsing emplace back ......... " << std::endl;
	people.emplace_back("nameB", 20);
	


	return 0;
}