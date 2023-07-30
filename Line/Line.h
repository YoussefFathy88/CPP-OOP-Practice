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
public:
	Line();
	void print();
	virtual ~Line();
	Line(const Line &other);
};

#endif /* LINE_H_ */
