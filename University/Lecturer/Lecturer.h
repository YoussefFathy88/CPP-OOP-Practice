/*
 * Lecturer.h
 *
 *  Created on: Aug 18, 2023
 *      Author: Youssef
 */

#ifndef UNIVERSITY_LECTURER_H_
#define UNIVERSITY_LECTURER_H_
#include <iostream>
#include <stdio.h>
#include <stdint.h>
using namespace std; /* Make std public namespace */

class Lecturer   {
public:
	explicit Lecturer();
	virtual void putData();
	virtual ~Lecturer();
	Lecturer(const Lecturer &other);
};

#endif /* UNIVERSITY_LECTURER_H_ */
