#ifndef MYCLASS_H
#define MYCLASS_H


#include <iostream>
#include <string>

class MyClass {
private:
	std::string name;
	int age;

public:
	// Конструктор по умолчанию
	MyClass() : name("Unknown"), age(0) {}

	// Конструктор с параметрами
	MyClass(std::string n, int a) : name(n), age(a) {}

	// Геттер для имени
	std::string getName() const {
		return name;
	}

	// Сеттер для имени
	void setName(const std::string& n) {
		name = n;
	} 
	
	// Геттер для возраста
	int getAge() const {
		return age;
	}

	// Сеттер для возраста
	void setAge(int a) {
		age = a;
	}
	
	// Вывода данных на экран
	void display() const {
		std::cout << "Name: " << name << ", Age: " << age << std::endl;
	}
	
};

#endif
