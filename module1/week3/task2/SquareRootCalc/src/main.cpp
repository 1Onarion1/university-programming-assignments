#include <iostream>
#include <cmath>

double squareRoot(double number) {
	if (number < 0) {
		std::cerr << "Невозможно найти квадратный корень из отрицательного числа!" << std::endl;
		return -1;
	}
	if (number == 0) return 0;

	double guess = number;
	double prevGuess = 0;

	while (fabs(guess - prevGuess) > 1e-7) {
		prevGuess = guess;
		guess = 0.5 * (guess + number / guess); // Формула Герона
	}
	
	return guess;
}

int main() {
	double number;
	std::cout << "Введите число, для которого нужно найти квадратный корень: ";
	std::cin >> number;

	double result = squareRoot(number);
	if (result != -1) {
		std::cout << "Квадратный корень числа " << number << "  равен: " << result << std::endl; 
	}

	return 0;
}
