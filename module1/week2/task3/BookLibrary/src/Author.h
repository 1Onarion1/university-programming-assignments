#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>

class Author {
private:
	std::string name;
	int birthYear;

public:
	Author(const std::string& name, int birthYear) : name(name), birthYear(birthYear) {}
	std::string getName() const {
		return name;
	}

	int getBirthYear() const {
		return birthYear;
	}

	void setName(const std::string& newName) {
		name = newName;
	}

	void setBirthYear(int newBirthYear) {
		birthYear = newBirthYear;
	}
};

#endif
