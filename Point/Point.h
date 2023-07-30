/*
 * Point.h
 *
 *  Created on: Jul 30, 2023
 *      Author: yofathy
 */

#ifndef POINT_POINT_H_
#define POINT_POINT_H_

#include <iostream>
#include <stdio.h>
#include <stdint.h>
using namespace std; /* Make std public namespace */

class Point {
private:
	int32_t x;
	int32_t y;
public:
	Point();
	virtual ~Point();
	Point(const Point &other);
};

#endif /* POINT_POINT_H_ */
