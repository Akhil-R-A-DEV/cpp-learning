#include <iostream>
#include <string>
#include "LibraryCard.h"

int main() {

	LibraryCard user1("unni");
	LibraryCard user2("manu");

	user1.checkOutBook();
	user1.checkOutBook();
	user1.checkOutBook();
	user1.checkOutBook();
	user1.checkOutBook();



	user1.returnBook();
	user1.returnBook();
	//user1.returnBook();
	//user1.returnBook();
	//user1.returnBook();
	//user1.returnBook();
	//user1.returnBook();
	//user1.returnBook();


	user2.checkOutBook();
	user2.checkOutBook();
	user2.checkOutBook();
	user2.checkOutBook();
	user2.checkOutBook();
	user2.checkOutBook();



	user2.returnBook();
	user2.returnBook();
	user2.returnBook();
	user2.returnBook();
	user2.returnBook();
	//user2.returnBook();
	//user2.returnBook();
	//user2.returnBook();

	std::cout << "  User1 : " << user1.getCardHolderName() << "Books to be Returned : "<< user1.getBookCheckout() << std::endl;
	std::cout << "  User2 : " << user2.getCardHolderName() << "Books to be Returned : " << user2.getBookCheckout() << std::endl;

	return 0;
}