#include <iostream>

int countEvens(int arr[], int size);

int main() {
	
	int arr[] = {1,2,3,4,5 ,6 ,8};
	int a = countEvens(arr, 7);

	std::cout << "total number of even numbere in the array : " << a;

	return 0;
}

int countEvens(int arr[], int size) {
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			count += 1;
		} 
	}
	return count;

}