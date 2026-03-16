#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>
#include<vector>

void fillVector(std::vector<int>& myVector);
void printVector(const std::vector<int>& myVector);
void countFives(const std::vector<int>& myVector);



int main() {
	
	std::vector<int>myVector;
	fillVector(myVector);
	printVector(myVector);
	countFives(myVector);

	replace(myVector.begin(), myVector.end(), 5, 99);
	printVector(myVector);
	countFives(myVector);

	sort(myVector.begin(), myVector.end());
	printVector(myVector);

	return 0;
}


void fillVector(std::vector<int>& myVector) {
	std::srand(time(nullptr));
	for (int i = 0; i < 20; i++) {
		myVector.push_back(rand() % 5 + 1);
	}
}
void printVector(const std::vector<int>& myVector) {
	for (int a : myVector) {
		std::cout << a << " ";
	}
	std::cout << std::endl;
}
void countFives(const std::vector<int>& myVector) {
	int countOfFive = count(myVector.begin(), myVector.end(), 5);
	std::cout << "count of 5 : " << countOfFive << std::endl;
}

