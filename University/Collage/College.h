/*
 * College.h
 *
 *  Created on: Aug 18, 2023
 *      Author: Youssef
 */

#ifndef UNIVERSITY_COLLEGE_H_
#define UNIVERSITY_COLLEGE_H_
#include "../Lecturer/Lecturer.h"
class College {

private:
	Lecturer ** Lecturers;
	int size;
	int empty_location;
public:
	explicit College();

	explicit College(int size);
	void addStufyMember(Lecturer* L);
	void putData(); // print object from user
	virtual ~College();
};

#endif /* UNIVERSITY_COLLEGE_H_ */
