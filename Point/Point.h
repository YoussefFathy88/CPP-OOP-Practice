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
class Line;
/* Not forward deceleration because at forward decleartion I don't know the class details */

using namespace std; /* Make std public namespace */

class Point {
friend class Line;
private:
	int32_t x;
	int32_t y;
public:
	explicit Point(int32_t x,int32_t y);
	explicit Point();
};

#endif /* POINT_POINT_H_ */
