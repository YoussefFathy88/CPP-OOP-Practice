/*
 * Matrix.h
 *
 *  Created on: Jul 29, 2023
 *      Author: yofathy
 */

#ifndef MATRIX_MATRIX_H_
#define MATRIX_MATRIX_H_

#include <iostream>
#include <stdio.h>
#include <stdint.h>
using namespace std; /* Make std public namespace */

class Matrix {
private:
	int32_t row;
	int32_t col;
	int32_t ** M; /* Since it's 2D array , 2 allocation and 2 Delete */

public:
	explicit Matrix (const int32_t& row ,const int32_t& col);
	explicit Matrix (const Matrix& CopyMatrix);
	int32_t get_element(int i, int j) const;
	void set_element(int i,int j,int m);
	void print();
	virtual ~Matrix();
};

#endif /* MATRIX_MATRIX_H_ */
