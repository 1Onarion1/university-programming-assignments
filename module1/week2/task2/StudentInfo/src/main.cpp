#include <iostream>
#include "Student.h"

int main() {
	std::string name, birthDate, group;
	int studentId;
	float averageScore;

	// Запрос данных у пользователя
	std::cout << "Введите имя студента: ";
	std::getline(std::cin, name);

	std::cout << "Введите дату рождения (YYYY-MM-DD): ";
	std::getline(std::cin, birthDate);

	std::cout << "Введите группу: ";
	std::getline(std::cin, group);

	std::cout << "Введите код студента: ";
	std::cin >> studentId;

	std::cout << "Введите средний балл: ";
	std::cin >> averageScore;

	// Создание объекта студента
	Student student(name, birthDate, group, studentId, averageScore);

	// Вывод информации о студенте
	std::cout << "\nИнформация о студенте:\n" << student.toString();
	std::cout << "Отличник: " << (student.isExcellentStudent() ? "Да" : "Нет") << std::endl;

	return 0;
}
