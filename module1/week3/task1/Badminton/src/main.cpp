#include <iostream>
#include <string>

bool canPlayBadminton(const std::string& weather, const std::string& temperature, const std::string& wind, const std::string& humidity) {
	// Проверка условия: день воскресенье, хорошая погода
	if (weather == "ясно" || weather == "облачно") {
		if (temperature == "жарко" || temperature == "тепло") {
			if (wind == "нет" && (humidity == "низкая")) {
				return true;
			}	
		}
	}
	return false;
}

int main() {
	// Ввод данных
	std::string weather, temperature, wind, humidity;

	std::cout << "Введите погоду (ясно/облачно): ";
	std::cin >> weather;

	std::cout << "Введите температуру (жарко/тепло/холодно): ";
	std::cin >> temperature;

	std::cout << "Введите значение ветра (есть/нет): ";
	std::cin >> wind;

	std::cout << "Введите влажность (высокая/низкая): ";
	std::cin >> humidity;

	// Проверка условий игры
	if (canPlayBadminton(weather, temperature, wind, humidity)) {
		std::cout << "Да, хотите играть в бадминтон!" << std::endl;
	} else {
		std::cout << "Нет, Вы не хотите играть в бадминтон, увы..." << std::endl;
	}

	return 0;
}
