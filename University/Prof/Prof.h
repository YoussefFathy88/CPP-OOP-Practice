/*
 * Prof.h
 *
 *  Created on: Aug 18, 2023
 *      Author: Youssef
 */

#ifndef UNIVERSITY_PROF_H_
#define UNIVERSITY_PROF_H_

#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include "../Lecturer/Lecturer.h"
using namespace std; /* Make std public namespace */

class Prof : public Lecturer {

private:

string firstName;
string LastName;
int age;
int publications;
int curr_id;

public:
	Prof();
	Prof(string firstName,string LastName , int age , int publications , int curr_id );
	void putData() override;
	virtual ~Prof();
};

#endif /* UNIVERSITY_PROF_H_ */
