#include<iostream>
#include"Node.h"

Node* createChain();
void printChain(Node* const head);
void deleteChain(Node*& head);

int main() {

	Node* theHead = createChain();
	printChain(theHead);
	deleteChain(theHead);

	return 0;
}


Node* createChain() {
	Node* head = nullptr;
	for (int i = 0; i < 25; i++) {
		head = new Node(i, head);
	}
	return head;
}
void printChain( Node* const head) {
	Node* walker = head;
	while (walker != nullptr) {
		std::cout << walker->getData() << std::endl;
		walker = walker->getNext();
	}
}
void deleteChain(Node*& head) {
	Node* nodeToDelete;
	while (head != nullptr) {
		nodeToDelete = head;
		head = head->getNext();
		delete nodeToDelete;
	}
}