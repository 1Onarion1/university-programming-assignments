#include <iostream>

int main() {
	const int size = 6;
	double data_array[size] = {1, 5, 10, 10, 0, -10};

	double max_value = data_array[0];
	for (int i = 1; i < size; i++) {
		if (data_array[i] > max_value) {
			max_value = data_array[i];
		}
	}
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (data_array[i] == max_value) {
			count++;
		}
	}

	std::cout << "Количество чисел, раных максимальному (" << max_value << "): " << count << std::endl;
	
	return 0;
}
