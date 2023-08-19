/*
 * RationalNumber.cpp
 *
 *  Created on: Aug 5, 2023
 *      Author: Youssef
 */

#include "RationalNumber.h"
	RationalNumber::RationalNumber():Numerator(0),Demnerator(0){
	}

	RationalNumber::RationalNumber(int Numerator , int Demnerator):Numerator(Numerator),Demnerator(Demnerator){

	}

	RationalNumber::RationalNumber(int Numerator):Numerator(Numerator),Demnerator(1){

	}

	RationalNumber RationalNumber::operator+(const RationalNumber& n2){
		Numerator = Numerator*n2.Demnerator + n2.Numerator*Demnerator; /*/n1.Dem * n2.Dem , Dem = reminder */
		Demnerator = Demnerator * n2.Demnerator;
		return *this;
	}


	RationalNumber RationalNumber::operator+(int n2){
		Numerator = Demnerator * n2 + Numerator;
		return *this;
	}

	RationalNumber RationalNumber::operator*(const RationalNumber& n2){
		Numerator = Numerator*n2.Numerator; /*/n1.Dem * n2.Dem , Dem = reminder */
		Demnerator = Demnerator * n2.Demnerator;
		return *this;

	}
	RationalNumber& RationalNumber::operator--(int){
		Numerator = Numerator - Demnerator;
		return *this;

	}
	std::ostream& operator<<(std::ostream& out, const RationalNumber& Number)
	{
	out << Number.Numerator << "/" <<Number.Demnerator << endl;
		return out; /* the first reference to make the operation on the same object the & to return for call changing */
	}

	RationalNumber RationalNumber::operator-(const RationalNumber& n2){
		Numerator = Numerator*n2.Demnerator - n2.Numerator*Demnerator; /*/n1.Dem * n2.Dem , Dem = reminder */
		Demnerator = Demnerator * n2.Demnerator;

		return *this;
	}
