#include <iostream>
#include <string>
#include "LibraryCard.h"

LibraryCard::LibraryCard(std::string cardHolderName) {
	this->cardHolderName = cardHolderName;
	this->bookCheckOut = 0;
};
void LibraryCard::checkOutBook() {
	bookCheckOut += 1;
};
void LibraryCard::returnBook() {
	if (bookCheckOut <=0 ) {
		bookCheckOut = 0;
	}
	else
	{
		bookCheckOut -= 1; 
	}
};
std::string LibraryCard::getCardHolderName() const{
	return cardHolderName;
};
int LibraryCard::getBookCheckout() const{
	return bookCheckOut;
};