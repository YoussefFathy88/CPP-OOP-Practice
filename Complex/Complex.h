/*
 * Complex.h
 *
 *  Created on: Jul 29, 2023
 *      Author: yofathy
 */

#ifndef COMPLEX_COMPLEX_H_
#define COMPLEX_COMPLEX_H_

#include <iostream>
#include <stdio.h>
#include <stdint.h>
using namespace std; /* Make std public namespace */

class Complex {
private:
	int32_t real;
	int32_t im;

public:
	explicit Complex();
	explicit Complex(const int32_t real);
	explicit Complex(const int32_t real , const int32_t im);
	void add (const Complex& c3 , const Complex& c4);
	void Multiply (const Complex& c3 ,const Complex& c4);
	void DisplayComplexNumber();
};

#endif /* COMPLEX_COMPLEX_H_ */
