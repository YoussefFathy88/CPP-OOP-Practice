/*
 * RationalNumber.h
 *
 *  Created on: Aug 5, 2023
 *      Author: Youssef
 */

#ifndef RATIONALNUMBER_RATIONALNUMBER_H_
#define RATIONALNUMBER_RATIONALNUMBER_H_

#include<string.h>
#include<iostream>
#include <stdio.h>
#include <stdint.h>

using namespace std;
class RationalNumber {
private:
	friend std::ostream& operator<<(std::ostream& out, const RationalNumber& Number);
	int Numerator;
	int Demnerator;

public:
	RationalNumber();
	RationalNumber(int Numerator);

	RationalNumber(int Numerator , int Demnerator);
	RationalNumber operator+(const RationalNumber& n1);
	RationalNumber operator+(int n2);
	RationalNumber operator*(const RationalNumber& n2);
	RationalNumber& operator--(int);
	RationalNumber operator-(const RationalNumber& Number);
};

#endif /* RATIONALNUMBER_RATIONALNUMBER_H_ */
