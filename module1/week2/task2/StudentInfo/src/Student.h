#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

class Student {
private:
	std::string name;
	std::string birthDate; // в формате "YYYY-MM-DD"
	std::string group;
	int studentId;
	float averageScore;

public:
	// Конструктор
	Student(std::string name, std::string birthDate, std::string group, int studentId, float averageScore) : name(name), birthDate(birthDate), group(group), studentId(studentId), averageScore(averageScore) {}

	// Геттеры
	std::string getName() const { return name; }
	std::string getBirthDate() const { return birthDate; }
	std::string getGroup() const { return group; }
	int getStudentId() const { return studentId; }
	float getAverageScore() const { return averageScore; }

	// Метод для расчета возраста
	int getAge() const {
		std::tm tm = {};
		std::istringstream ss(birthDate);
		ss >> std::get_time(&tm, "%Y-%m-%d");
		time_t birth = mktime(&tm);
		time_t now = time(nullptr);
		return std::difftime(now, birth) / (365 * 24 * 60 * 60);
	}
	
	// Метод для вывода информации о студенте
	std::string toString() const {
		return "Имя: " + name + "\n" + "Группа: " + group + "\n" + "Код студента: " + std::to_string(studentId) + "\n" + "Средний балл: " + std::to_string(averageScore) + "\n" + "Возраст: " + std::to_string(getAge()) + "лет\n"; 
	}
	
	// Метод для проверки на отличника
	bool isExcellentStudent() const {
		return averageScore >= 4.8;
	}
};

#endif

