#include <iostream>
#include "Octagon.h"

int main() {
	double radius;
	std::cout << "Введите радиус восьмиугольника: ";
	std::cin >> radius;
	Octagon octagon(radius);
	std::cout << "Площадь восьмиугольника: " << octagon.calculateArea() << std::endl;
	std::cout << "Периметр восьмиугольника: " << octagon.calculatePerimeter() << std::endl;
	return 0;
}
