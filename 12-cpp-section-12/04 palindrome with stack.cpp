#include <iostream>
#include <stack>
#include <string>


void makePalintrome(const std::string& ogString, std::stack<char>& revStack);
bool isPalindrome(const std::string& ogString);
void printData(const std::string& ogString);



int main() {

	printData("abcba");

	return 0;
}

void makePalintrome(const std::string& ogString, std::stack<char>& revStack) {
	for (char c : ogString) {
		revStack.push(c);
	}
}
bool isPalindrome(const std::string& ogString) {
	std::cout << std::boolalpha;
	std::stack<char> revStack;

	makePalintrome(ogString, revStack);
	for (char c : ogString) {
		if (revStack.top() != c) {
			return false;
		} revStack.pop();
	}
	return true;

}
void printData(const std::string& ogString) {
	std::cout << " Is " << ogString << "Palindrome ? -> " << isPalindrome(ogString);
}