#ifndef LIBRARYCARD_H
#define LIBRARYCARD_H
#include <string>

class LibraryCard {
	public:
		LibraryCard(std::string cardHolderName);
		void checkOutBook();
		void returnBook();
		std::string getCardHolderName() const ;
		int getBookCheckout() const;

	private:
		std::string cardHolderName;
		int bookCheckOut;
};

#endif // !LIBRARYCARD_H
