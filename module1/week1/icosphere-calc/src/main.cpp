#include <iostream>
#include <cmath>

const double PHI = (1 + sqrt(5)) / 2; // Золотое сечение для расчета

// Функция для расчета объема икосаэдра
double calculateIcosahedronVolume(double edgeLenght) {
	// Формула для объема икосаэдра: V = (5 * (3 + sqrt(5)) / 12) * edgeLenght^3
	return (5 * (3 + sqrt (5)) / 12) * pow(edgeLenght, 3);
}

int main () {
	double edgeLenght;

	// Запрос длины ребра у пользователя
	std::cout << "Введите длину ребра икосаэдра: ";
	std::cin >> edgeLenght;

	// Проверка на корректность ввода
	if (edgeLenght <= 0) {
		std::cerr << "Ошибка: длина ребра должна быть положительным числом" << std::endl;
	}
	
	// Вычисление объема
	double volume = calculateIcosahedronVolume(edgeLenght);
	
	// Вывод результата
	std::cout << "Объем икосаэдра с длиной ребра " <<  edgeLenght << " равен " << volume << std::endl;
	
	return 0;
	
}
