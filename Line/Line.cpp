/*
 * Line.cpp
 *
 *  Created on: Jul 30, 2023
 *      Author: yofathy
 */

#include "Line.h"

Line::Line() {
	// TODO Auto-generated constructor stub

}

Line::~Line() {
	// TODO Auto-generated destructor stub
}

Line::Line(const Line &other) {
	// TODO Auto-generated constructor stub

}

void Line::print(){ /* y = mx  + c  slope (x1,y1) (x2,y) */
	double m = p2.y-p1.y / p2.x - p1.x;
    double c = p1.y - m*p1.x;
    printf("y = %dx + %d",m,c);
}
