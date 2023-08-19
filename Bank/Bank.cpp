/*
 * Bank.cpp
 *
 *  Created on: Aug 5, 2023
 *      Author: Youssef
 */

#include "Bank.h"

Bank::Bank() {
	Accounts = new Account[10];
	/* next account number = 10 */
}

Bank::~Bank() {
	delete[] Accounts;
}


void Bank::OpenAccount(const string& firstname,const string& lastname, float balance){

	Account a1(firstname, lastname, balance);
	Accounts[Account::get_Next_Account_Number()-1] = a1; /* static function for getting next account number */
}


void Bank::BalanceEnquiry(int accountNumber){
	accountNumber--;
	if(accountNumber > Account::get_Next_Account_Number() ){
		printf("the account number doesn't exist \n");
	}
	else{
		cout << Accounts[accountNumber].get_balance() << endl;
	}
}

void Bank::Deposit(int accountNumber, float amount){
	accountNumber--;
	if(accountNumber > Account::get_Next_Account_Number() ){
		printf("the account number doesn't exist \n");
	}
	else{
		Accounts[accountNumber].deposit(amount);
	}


}
void Bank::Withdraw(int accountNumber, float amount){
	accountNumber--;
	if(accountNumber > Account::get_Next_Account_Number() ){
		printf("the account number doesn't exist \n");
	}
	else{
		Accounts[accountNumber].withdraw(amount);
	}
}
void Bank::CloseAccount(int accountNumber){
	accountNumber--;
	if(accountNumber > Account::get_Next_Account_Number() ){
		printf("the account number doesn't exist");
	}
	else {
		int i;
		for(i = accountNumber; i < Account::get_Next_Account_Number(); i++){
			Accounts[i] = Accounts[i+1];
		}
		Account::DecrementAccNumber();
	}

}
void Bank::showAllAccounts(){
	for(int i = 0; i <  Account::get_Next_Account_Number(); i++){
		cout << Accounts[i];
	}
}
