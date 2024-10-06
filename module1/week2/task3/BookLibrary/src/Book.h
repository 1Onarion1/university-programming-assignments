#ifndef BOOK_H
#define BOOK_H

#include "Author.h"

class Book {
private:
	Author author;

public:
	Book(const Author& author) : author(author) {}

	Author getAuthor() const {
		return author;
	}

	void setAuthor(const Author& newAuthor) {
		author = newAuthor;
	}

	void displayInfo() const {
		std::cout << "Автор: " << author.getName() << ", Год рождения: " << author.getBirthYear() << std::endl;
	}
};

#endif
