/*
 * Account.h
 *
 *  Created on: Jul 30, 2023
 *      Author: Youssef
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include<string.h>
#include<iostream>
#include <stdio.h>
#include <stdint.h>
using namespace std;

class Account {
private:
	friend std::ostream& operator<<(std::ostream& out, const Account& other);
	string FirstName;
	string LastName;
	int AccountNumber;
	float Balance;
	static int NextAccoutNumber;
public:
	Account();
	Account(string FirstName,string LastName,float Balance);
	void deposit(float amount);
	void withdraw(float amount);
	static int get_Next_Account_Number();
	static void DecrementAccNumber();
	Account(const Account& ); /* copy constructor */
	float get_balance();

	~Account();
};

#endif /* Account_H_ */
