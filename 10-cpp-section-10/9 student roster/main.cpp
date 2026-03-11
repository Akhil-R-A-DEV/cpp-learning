#include <iostream>
#include <string>
#include "Student.h"
#include <fstream>
#include <vector>
int main() {
	std::ifstream dataFile("studentData.txt");
	if (!dataFile) {
		std::cerr << "Sory can't open the file" << std::endl;
		return 1;
	}

	std::vector<Student*>roster;
	std::string fname;
	std::string lname;
	double gpa;

	while (dataFile >> fname >> lname >> gpa) {
		if (gpa >= 0.0 && gpa < 4.5) {
			Student* a = new Student(fname, lname , gpa);
			roster.push_back(a);
		}
	}

	dataFile.close();


	for (Student* s : roster) {
		std::cout << "Full name : " << s->getFullName()  << " |  Gpa  : " << s->getGpa() << std::endl;
	}

	for (Student* s : roster) {
		delete s;
		s = nullptr;
	}

	return 0;
}