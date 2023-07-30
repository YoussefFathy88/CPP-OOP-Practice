/*
 * Matrix.cpp
 *
 *  Created on: Jul 29, 2023
 *      Author: yofathy
 */

#include "Matrix.h"

explicit Matrix :: Matrix (const int32_t& row ,const int32_t& col): row(row),col(col){

	M = new int* [col]; /* allocating the 2D array */

	for (int32_t i = 0; i < col; i++){
		M[i] = new int[row];
	}

	/*Initalize the matrix with 0 */
	for (int32_t i = 0; i < col; i++) {
		for(int32_t j = 0; j < row; j++ ){
			M[i][j] = 0;
		}
	}
	printf("Parameterized constructor called called \n");
}

explicit Matrix :: Matrix (const Matrix& CopyMatrix):row(CopyMatrix.row),col(CopyMatrix.col){
	M = new int* [col]; /* allocating the 2D array */
	for (int32_t i = 0; i < col; i++){
		M[i] = new int[row];
	}

	for (int i = 0; i < col; i++){
		for (int j = 0; j < col; j++){
			M[i][j] = CopyMatrix.M[i][j];
			/* for deep copying to avoid segementation fault in the destructor */
		}
	}
}


int32_t Matrix::get_element(int i, int j) const {
	return M[i][j];
}

void Matrix::set_element(int i,int j,int m){
	M[i][j] = m;
}

void Matrix::print(){
	printf ("\n* * * \n");
	for (int32_t i = 0; i < col; i++) {
		for(int32_t j = 0; j < row; j++ ){
			printf("%d " , M[i][j]);
		}
		printf("\n");
	}
	printf ("* * * \n");


}

Matrix::~Matrix() {
	for(int32_t i = 0; i<col; i++){
		if(M[i] != nullptr){
			delete[] M[i];
		}
	}

	if (M != nullptr){
	delete[] M;
	}
	/* [1 2 3] [4,5,6] [7,8,9] */
}

