#ifndef OCTAGON_H
#define OCTAGON_H

#include <cmath>

class Octagon {
private:
	double innerRadius;

public:
	// Конструктор по умолчанию
	Octagon(double radius = 0) : innerRadius(radius) {}

	// Метод для установки значения в innerRadius
	void setInnerRadius(double radius) {
		innerRadius = radius;
	}

	// Расчет площади восьмиугольника
	double calculateArea() const {
		return 2 * (1 + sqrt(2)) * innerRadius * innerRadius;
	}
	
	// Расчет периметра восьмиугольника 
	double calculatePerimeter() const {
		return 8 * innerRadius * (sqrt(2) + 1);
	}
};

#endif

