#include <iostream>
#include <string>
#include <vector>
//#include <algorithm>

void ptintVector(const std::vector<int>& vec);

int main() {
	std::cout<< "original : " << std::endl;
	std::vector<int>myVec{ 1,2,3,4,5,2,6,2,2,7,9 };
	ptintVector(myVec);

	auto a = remove(myVec.begin(), myVec.end(), 2);

	myVec.erase(a, myVec.end());
	std::cout << std::endl;
	std::cout << "without 2 : " << std::endl;
	ptintVector(myVec);

	return 0;
}

void ptintVector(const std::vector<int>& vec) {

	for (int i : vec) {
		std::cout << i << " ";
	}
	


}