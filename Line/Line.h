/*
 * Line.h
 *
 *  Created on: Jul 30, 2023
 *      Author: yofathy
 */

#ifndef LINE_H_
#define LINE_H_
#include "../Point/Point.h"
class Line { /* y=mx+c */
private:
	Point p1;
	Point p2;
	double m;
	double c;
public:
	explicit Line(const Point& p1, const Point& p2) ;
	void print();
	Line operator+(double n);
	Line(const Line& L1);
};

#endif /* LINE_H_ */
