#ifndef BANCACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
private:
	std::string accountNumber;
	double balance;

public:
	BankAccount(const std::string& accNumber) : accountNumber(accNumber), balance(0.0) {}
	void deposit(double amount) {
		balance += amount;
	}

	bool withdraw(double amount) {
		if (amount <= balance) {
			balance -= amount;
			return true;
		}
		return false;
	}
	
	double getBalance() const {
		return balance;
	}

	std::string getAccountNumber() const {
		return accountNumber;
	}
};

#endif
