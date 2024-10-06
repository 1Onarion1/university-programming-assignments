#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include "Passenger.h"
#include <vector>
#include <iostream>

class Car {
private:
	std::string model;
	Engine engine;
	std::vector<Passenger> passengers;

public:
	Car(const std::string& model, const Engine& engine) : model(model), engine(engine) {}

	void addPassenger(const Passenger& passenger) {
		passengers.push_back(passenger);
	}

	void removePassenger(const std::string& passengerName) {
		for (auto it = passengers.begin(); it != passengers.end(); ) {
			if (it->getName() == passengerName) {
				it = passengers.erase(it);
			} else {
				++it;
			}
		}
	}
	
	void displayInfo() const {
		std::cout << "Модель машины: " << model << "\nМощьность двигателя: " << engine.getPower() << " HP\nPassengers: \n";
		for (const auto& passenger : passengers) {
			std::cout << " - " << passenger.getName() << std::endl;
		}
	}
};

#endif
