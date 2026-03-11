#include "Student.h"
#include <string>

Student::Student(std::string fname, std::string lname, double GPA) {
	this->fname = fname;
	this->lname = lname;
	this->GPA = GPA;
}
std::string Student::getFullName() const {
	return lname + " " + fname;
}

double Student::getGpa()const {
	return GPA;
}