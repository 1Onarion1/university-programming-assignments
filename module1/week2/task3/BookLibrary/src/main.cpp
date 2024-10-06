#include <iostream>
#include "Author.h"
#include "Book.h"

int main() {
	std::string authorName;
	int birthYear;

	std::cout << "Введите имя автора: ";
	std::getline(std::cin, authorName);
	std::cout << "Введите дату рождения автора: ";
	std::cin >> birthYear;

	Author author(authorName, birthYear);
	Book book(author);

	std::cout << "Информация о книге: " << std::endl;
	book.displayInfo();

	return 0;
}
