/*
 * Account.cpp
 *
 *  Created on: Jul 30, 2023
 *      Author: Youssef
 */

#include "Account.h"
int Account::NextAccoutNumber = 0;


Account::Account():FirstName(""),LastName(""),AccountNumber(NextAccoutNumber),Balance(0.0) {
	NextAccoutNumber++;
}

Account::~Account() { }

Account::Account(string FirstName,string LastName,float Balance):FirstName(FirstName),LastName(LastName),AccountNumber(NextAccoutNumber),Balance(Balance){
	NextAccoutNumber++;
}

void Account::deposit(float amount){
	Balance+=amount;
}
void Account::withdraw(float amount){
	if(Balance>=amount){
		Balance -= amount;
	} else {
		cout << "No enough balance in the Account account " << endl;
	}
}
Account::Account(const Account& OtherAccount ){
	FirstName = OtherAccount.FirstName;
	LastName = OtherAccount.LastName;
	AccountNumber = OtherAccount.AccountNumber;
	Balance = OtherAccount.Balance;
}



std::ostream& operator<<(std::ostream& out, const Account& MyAccount)
{
	out << "\n";
	out << " ********" << "\n";
	out << " FirtName: " << MyAccount.FirstName << "\n";
	out << " LastName: " << MyAccount.LastName << "\n";
	out << " Balance: " << MyAccount.Balance << "\n";
	out << " Account Number: " << MyAccount.AccountNumber-9 << "\n";
	out << " ********" << "\n";

	return out; /* the first reference to make the operation on the same object the & to return for call changing */
}

int Account::get_Next_Account_Number(){
	return NextAccoutNumber-10; // 10 already reserved after constructing the array
}

void Account::DecrementAccNumber(){
	NextAccoutNumber--;
}

float Account::get_balance() {
	return Balance;
}
