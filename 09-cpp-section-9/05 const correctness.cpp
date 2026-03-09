#include<iostream>

void ncp2ncd();
void ncp2cd();
void cp2ncd();
void cp2cd();

int main() {

	ncp2ncd();
	ncp2cd();
	cp2ncd();
	cp2cd();

	return 0;
}


void ncp2ncd() {
	std::cout << "non const pointer to non const data " << std::endl;

	int* intPtr = new int(100);
	std::cout << "\toriginal data : "<< *intPtr << std::endl;

	*intPtr = 50;
	std::cout << "\tnew data : " << *intPtr << std::endl;

	delete intPtr;

	intPtr = new int(1111);

	std::cout << "\tnew non cost ptr : " << *intPtr << std::endl;

	delete intPtr;

}
void ncp2cd() {
	std::cout << "non const pointer to const data " << std::endl;

	const int* intPtr = new int(1000);
	std::cout << "\toriginal data : " << *intPtr << std::endl;

	//*intPtr = 50;
	delete intPtr;
	intPtr = new int(123);
	std::cout << "\tnew non cost ptr : " << *intPtr << std::endl;
	delete intPtr;

}
void cp2ncd() {
	std::cout << "const pointer to non const data " << std::endl;

	int* const intPtr = new int (500);
	std::cout << "\toriginal data : " << *intPtr << std::endl;

	*intPtr = 300;
	std::cout << "\tnew data : " << *intPtr << std::endl;

	//intPtr = new int(546);
	delete intPtr;

}
void cp2cd() {
	std::cout << "const pointer to const data " << std::endl;

	const int* const intPtr = new int(125);
	std::cout << "\toriginal data : " << *intPtr << std::endl;

	//*intPtr = 50;
	//intPtr = new int(145);
	delete intPtr;

}