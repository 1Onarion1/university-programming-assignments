#include <iostream>
#include "Engine.h"
#include "Passenger.h"
#include "Car.h"

int main() {
	Engine engine(150);
	Car car("Toyota", engine);

	Passenger p1("Алиса");
	Passenger p2("Джон");

	car.addPassenger(p1);
	car.addPassenger(p2);

	car.displayInfo();

	car.removePassenger("Алиса");
	std::cout << "\nПосле удаления Алисы:\n";
	car.displayInfo();

	return 0;
}
