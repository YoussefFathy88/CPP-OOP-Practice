/*
 * Assistant.cpp
 *
 *  Created on: Aug 18, 2023
 *      Author: Youssef
 */

#include "Assistant.h"

Assistant::Assistant(string firstName,string LastName,int age ,int department ,string researchName):firstName(firstName),LastName(LastName),age(age),department(department),researchName(researchName){

}

Assistant::Assistant():firstName(""),LastName(""),age(0),department(0),researchName(""){

}


Assistant::~Assistant() {

}

void Assistant::putData(){
	cout << "First Name:" << firstName << "Last Name:" << LastName << endl;
}
