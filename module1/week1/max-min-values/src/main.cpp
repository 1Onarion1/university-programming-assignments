#include <iostream>
#include <limits> // Подключаем библиотеку для использования std::numeric_limits 


int main() {
	// Выводим минимальные и максимальные значения для различных типов данных


	// Для типа int 
	std::cout << "Тип int" <<  std::endl;
	std::cout << "Минимальное значение: " << std::numeric_limits<int>::min() << std::endl; // -2147483648
	std::cout << "Максимальное значение: " << std::numeric_limits<int>::max() <<std::endl; //  2147483648
	// int занимает 4 байта и используется для хранения целых значений.

	// Для типа unsigned int
	std::cout << "Тип: unsigned int" << std::endl;
	std::cout << "Минимальное значение: " << std::numeric_limits<unsigned int>::min() << std::endl; // 0
	std::cout << "Максимальное значение: " << std::numeric_limits<unsigned int>::max() << std::endl; // 4294967295
	// unsigned int используется для хранения неотрицательных целых значений и занимает 4 байта.

	// Для типа float
	std::cout << "Тип: float" << std::endl;
        std::cout << "Минимальное значение: " << std::numeric_limits<float>::min() << std::endl; // -3.40282e+38
        std::cout << "Максимальное значение: " << std::numeric_limits<float>::max() << std::endl; // 3.40282e+38
	// float занимает 4 байта и используется для хранения чисел с плавающей точкой.

	// Для типа double
	std::cout << "Тип: double" << std::endl;
        std::cout << "Минимальное значение: " << std::numeric_limits<double>::min() << std::endl; // -1.79769е+308
        std::cout << "Максимальное значение: " << std::numeric_limits<double>::max() << std::endl; // 1.79769e+308
	// double занимает 8 байт и используется для хранения чисел с двойной точностью.
	return 0;
}
