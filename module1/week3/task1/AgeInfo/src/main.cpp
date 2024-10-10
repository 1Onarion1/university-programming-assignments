#include <iostream>

using namespace std;

string getAgeSuffix(int age) {
	if (age % 10 == 1 && age % 100 != 11) {
		return "год";
	} else if ((age % 10 >= 2 && age % 10 <= 4) && (age % 100 < 10 || age % 100 >= 20)) {
		return "года";
	} else {
		return "лет";
	}
}

int main() {
	int age;
	cout << "Введите Ваш возраст: ";
	cin >> age;

	if (age >= 0) {
		cout << age << " " << getAgeSuffix(age) << endl;
	} else {
		cout << "Некорректный возраст" << endl;
	}
	
	return 0;
}
