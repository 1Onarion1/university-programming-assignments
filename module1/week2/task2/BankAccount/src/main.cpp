#include <iostream>
#include "BankAccount.h"

int main() {
	std::string accountNumber;
	std::cout << "Введите номер счета: ";
	std::cin >>accountNumber;

	BankAccount account(accountNumber);

	double depositAmount;
	std::cout << "Введите сумму для пополнения счета: ";
	std::cin >> depositAmount;
	account.deposit(depositAmount);
	std::cout << "Баланс после пополнения: " << account.getBalance() << std::endl;

	double withdrawAmount;
	std::cout << "Введите сумму для снятия со счета: ";
	std::cin >> withdrawAmount;
	if (account.withdraw(withdrawAmount)) {
		std::cout << "Снятие успешно. Баланс: " << account.getBalance() << std::endl;
	} else {
		std::cout << "Недостаточно средств для снятия." << std::endl;
	}

	return 0;
}
