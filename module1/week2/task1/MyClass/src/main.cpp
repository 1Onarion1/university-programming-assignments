#include <iostream>
#include <string>

class Person {
private:
	std::string name;
	int age;

public:
	// Значения по умолчанию
	Person() : name("Unknown"), age(0) {}

	// Значения с параметрами
	Person(std::string n, int a) : name(n), age(a) {}

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
};

int main() {
	// Создание экземпляров класса
	Person person1;
	Person person2("Jonh", 30);
	
	// Вывод данных на экран
	std::cout << "Person 1: " << person1.getName() << ", " << person1.getAge() << std::endl;
	std::cout << "Person 2: " << person2.getName() << ", " << person2.getAge() << std::endl;

	return 0;	
}


