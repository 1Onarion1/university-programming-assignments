#include <iostream>
#include <vector>

void SieveOfEratosthenes(int n) {
	std::vector<bool> prime(n + 1, true); // Изначально все числа считаем простыми
	prime[0] = false; // 0 не простое
	prime[1] = false; // 1 не простое

	for (int p = 2; p * p <= n; p++) {
		if (prime[p]) {
			for (int i = p * p; i <= n; i += p) {
				prime[i] = false; // Состовные числа как ложные
			}
		}
	}

	std::cout << "Простые числа до " << n << ": ";
	for (int p = 2; p <= n; p++) {
		if (prime[p]) {
			std::cout << p << " ";
		}
	}
	std::cout << std::endl;
}

int main() {
	int n;
	std::cout << "введите верхнюю границу для поиска простых чисел: ";
	std::cin >> n;
	SieveOfEratosthenes(n);
	return 0;
}
