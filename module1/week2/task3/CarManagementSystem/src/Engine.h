#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
	int power;

public:
	Engine(int power) : power(power) {}
	int getPower() const {
		return power;
	}

	void setPower(int newPower) {
		power = newPower;
	}
};

#endif
