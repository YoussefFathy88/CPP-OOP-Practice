/*
 * Complex.cpp
 *
 *  Created on: Jul 29, 2023
 *      Author: yofathy
 */

#include "../Complex/Complex.h"

	/* use explicit to ensure that no implicit casting in constructor */

	Complex::Complex::Complex(): real(0),im(0){
		printf("Default constructor called \n");
	}

	/* Passing by reference for avoid copying of the variables */

	Complex::Complex(const int32_t real): real(real) , im(0) {
		printf("Real parameterized constructor called \n");
	}

	Complex::Complex(const int32_t real , const int32_t im): real(real) , im(im){
		printf("Complex and real parameterized constructor called \n");
	}


	void Complex::add (const Complex& c3 , const Complex& c4){
		real = c3.real + c4.real;
		im = c3.im +c4.im;
	}

	void Complex::Multiply (const Complex& c3 ,const Complex& c4){
		real = c3.real * c4.real;
		im = c3.im  * c4.im;
	}

	void Complex::DisplayComplexNumber() {
		printf("Real = %d , Imaginary = %d \n",real,im);
	}

