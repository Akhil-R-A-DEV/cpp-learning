#include <iostream>

int main() {

	int num = 0;
	while (num <= 10) {
		if (num == 5) {
			num++;
			//continue; // this will skip 5
			break; //stops when num become 5    (0 to 4)
			
		}
		std::cout << num << std::endl;
		num++;
	}

	return 0;
}