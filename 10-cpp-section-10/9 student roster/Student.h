#ifndef STUDENT_H
#define STUDENT_H
#include <string>
class Student {
	public:
		Student(std::string fname, std::string lname, double GPA);
		std::string getFullName() const;
		
		double getGpa()const;
	private:
		std::string fname;
		std::string lname;
		double GPA;
		
};

#endif // !STUDENT_H
