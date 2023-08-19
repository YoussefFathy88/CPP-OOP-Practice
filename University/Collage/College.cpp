/*
 * College.cpp
 *
 *  Created on: Aug 18, 2023
 *      Author: Youssef
 */

#include "College.h"

College::College(): Lecturers(nullptr ) ,size(0) , empty_location(0){

}
College::College(int size): Lecturers(new Lecturer* [size] ) ,size(size) , empty_location(0){

}

College::~College() {
	if (Lecturers != nullptr){
		delete [] Lecturers;
	}
}

void College::addStufyMember(Lecturer* L){
	Lecturers[empty_location++] = L;
}
void College::putData(){
	for(int i = 0; i<empty_location;i++){
		Lecturers[i]->putData();
	}
}


