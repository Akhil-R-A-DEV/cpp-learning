#include<iostream>
#include <vector>
#include <memory>
int main() {

	std::vector<int>nums{1, 2, 3, 4, 5, 6};
	for (int n : nums) {
		std::cout << n;
	}



	for (auto it = nums.begin(); it != nums.end();) {
		if (*it % 2 == 0) {
			it = nums.erase(it);
		}
		else
		{
			it++;
		}
	}




	//for (int n : nums) {         // not to use
	//	if (n % 2 == 0) {
	//		nums.erase(remove(nums.begin(), nums.end(), n), nums.end());
	//	}
	//}



	std::cout << "   after removing ";
	for (int n : nums) {
		std::cout << n << "" ;
	} 
	std::cout << std::endl;





	return 0;
}