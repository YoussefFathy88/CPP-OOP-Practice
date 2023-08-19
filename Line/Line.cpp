/*
 * Line.cpp
 *
 *  Created on: Jul 30, 2023
 *      Author: yofathy
 */

#include "Line.h"

Line::Line(const Point& p1, const Point& p2) {
	this->p1.x = p1.x;
	this->p1.y = p1.y;
	this->p2.x = p2.x;
	this->p2.y = p2.y;
	m = static_cast<double>(p2.y-p1.y) / static_cast<double>(p2.x - p1.x);
    c = static_cast<double>(p1.y) - m*static_cast<double>(p1.x);

}


void Line::print(){ /* y = mx  + c  slope (x1,y1) (x2,y) */

    printf("y = %fx + %f \n",m,c);

}

Line Line::operator+(double n) {
	c = c + n;
	return *this;
}

Line::Line(const Line& L1) {
	p1 = L1.p1;
	p2 = L1.p2;
	m = L1.m;
	c = L1.c;
}
