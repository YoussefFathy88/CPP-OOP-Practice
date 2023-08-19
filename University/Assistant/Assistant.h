/*
 * Assistant.h
 *
 *  Created on: Aug 18, 2023
 *      Author: Youssef
 */

#ifndef UNIVERSITY_ASSISTANT_H_
#define UNIVERSITY_ASSISTANT_H_

#include <iostream>
#include <stdio.h>
#include <stdint.h>
using namespace std; /* Make std public namespace */
#include "../Lecturer/Lecturer.h"

class Assistant : public Lecturer {
private:
	string firstName;
	string LastName;
	int age;
	int department;
	string researchName;

public:
	explicit Assistant();

	explicit Assistant(string firstName,string LastName,int age ,int department ,string researchName);
	void putData () override;
	virtual ~Assistant();
};

#endif /* UNIVERSITY_ASSISTANT_H_ */
