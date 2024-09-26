
#include <iostream>
#include <string>

int main() {
	std::string userName;
	std::cout << "Enter your name: ";
	std::getline(std::cin, userName);
	std::cout << "Hello, " << userName << "!" << std::endl;
	return 0;
}
