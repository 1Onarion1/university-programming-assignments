#include <iostream>

void printPyramid(int height) {
	for (int i = 1; i <= height; ++i) {
		for (int j = i; j < height; ++j) {
			std::cout << " ";
		}
		for (int j = 1; j <= (2 * i - 1); ++j) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}

int main() {
	int height;

	std::cout << "Введите высоту пирамиды: ";
	std::cin >> height;

	printPyramid(height);

	return 0;
}
