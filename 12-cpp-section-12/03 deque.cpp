#include <iostream>
#include<deque>

void printDeque(std::deque<int>& myDeque);

int main() {
	std::deque<int>myDeque;
	myDeque.push_back(1);
	myDeque.push_back(2);
	myDeque.push_back(3);
	printDeque(myDeque);
	std::cout << "------------" << std::endl;
	myDeque.push_front(4);
	myDeque.push_front(5);
	myDeque.push_front(6);
	printDeque(myDeque);



}
void printDeque(std::deque<int>& myDeque) {
	for (int a : myDeque) {
		std::cout << a << std::endl;
	}
}