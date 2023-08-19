/*
 * Prof.cpp
 *
 *  Created on: Aug 18, 2023
 *      Author: Youssef
 */

#include "Prof.h"

Prof::Prof(string firstName,string LastName , int age , int publications , int curr_id ):firstName(firstName),LastName(LastName),age(age),publications(publications),curr_id(curr_id) {

}

Prof::Prof():firstName(" "),LastName(""),age(0),publications(0),curr_id(0) {

}

void Prof::putData(){
	cout << "First Name:" << firstName << "Last Name:" << LastName << endl;

}


Prof::~Prof() {
}

