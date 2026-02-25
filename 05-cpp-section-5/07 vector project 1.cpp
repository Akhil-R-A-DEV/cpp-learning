/*
create a new project 
create a vector and add name of 5 people
after adding 5 names insert your name as the 3ed element 
and after your name was added then remove the last element
finally print the elements in the vector
*/
#include <iostream>
#include <string>
#include <vector>

int main() {

	std::vector<std::string> peopleNames;

	peopleNames.push_back("unni");
	peopleNames.push_back("manu");
	peopleNames.push_back("ramu");
	peopleNames.push_back("dev");
	peopleNames.push_back("sasi");

	peopleNames.insert(peopleNames.begin() + 2, "akhil");
	peopleNames.pop_back();

	//for (std::string people : peopleNames) { 
	for (std::string& people : peopleNames) {    //string& is a reference operator
		std::cout << people << std::endl;
	}


	return 0;
}