#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger {
private:
	std::string name;

public:
	Passenger(const std::string& name) : name(name) {}
	std::string getName() const {
		return name;
	}
	
	void setName(const std::string& newName) {
		name = newName;
	}
};

#endif
