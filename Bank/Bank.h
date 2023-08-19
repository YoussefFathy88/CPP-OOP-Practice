/*
 * Bank.h
 *
 *  Created on: Aug 5, 2023
 *      Author: Youssef
 */

#ifndef BANK_BANK_H_
#define BANK_BANK_H_
#include "Account/Account.h"

class Bank {
private:
	/* Assume we have maximum of 10 accounts */
	Account * Accounts;

public:
	Bank();
	void OpenAccount(const string& firstname,const string& lastname, float balance);
	void BalanceEnquiry(int accountNumber);
	void Deposit(int accountNumber, float amount);
	void Withdraw(int accountNumber, float amount);
	void CloseAccount(int accountNumber);
	void showAllAccounts();
	~Bank();
};

#endif /* BANK_BANK_H_ */
