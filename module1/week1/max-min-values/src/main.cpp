#include <iostream>
#include <limits>


void printDataLimits() {
	std::cout << "Type int:\n";
	std::cout << "Min: " << std::numeric_limits<int>::min() << "\n\n";
	std::cout << "Max: " << std::numeric_limits<int>::max() << "\n\n";
	std::cout << "Type unsigned int:\n";
	std::cout << "Min: " << std::numeric_limits<unsigned int>::min() << "\n\n";
	std::cout << "Max: " << std::numeric_limits<unsigned int>::max() << "\n\n";
	std::cout << "Type short:\n";
	std::cout << "Min: " << std::numeric_limits<short>::min() << "\n\n";
	std::cout << "Max: " << std::numeric_limits<short>::max() << "\n\n";
	std::cout << "Type unsigned short:\n";
        std::cout << "Min: " << std::numeric_limits<unsigned short>::min() << "\n\n";
        std::cout << "Max: " << std::numeric_limits<unsigned short>::max() << "\n\n";
	std::cout << "Type long:\n";
        std::cout << "Min: " << std::numeric_limits<long>::min() << "\n\n";
        std::cout << "Max: " << std::numeric_limits<long>::max() << "\n\n";
	std::cout << "Type float:\n";
        std::cout << "Min: " << std::numeric_limits<float>::min() << "\n\n";
        std::cout << "Max: " << std::numeric_limits<float>::max() << "\n\n";
	std::cout << "Type double:\n";
        std::cout << "Min: " << std::numeric_limits<double>::min() << "\n\n";
        std::cout << "Max: " << std::numeric_limits<double>::max() << "\n\n";
}

int main() {
	printDataLimits();
	return 0;
}
