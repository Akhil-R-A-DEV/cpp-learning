#include <iostream>

template<class T>// template

T bigger(T a, T b);

int main() {

	std::cout << bigger(6, 10) << std::endl;
	std::cout << bigger("b", "a") << std::endl;

	return 0;
}
template<class T>
T bigger(T a, T b) {       //function template
	return (a > b) ? a : b;
}