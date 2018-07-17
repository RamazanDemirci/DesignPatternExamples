/*
 * Doctor.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include "Doctor.h"
#include "Patient.h"
#include <stdio.h>

Doctor::Doctor() {
	// TODO Auto-generated constructor stub
	this->name = "Unknown";
}

Doctor::~Doctor() {
	// TODO Auto-generated destructor stub
}

Doctor::Doctor(std::string name) {
	//printf("\n%s", __FUNCTION__);
	this->name = name;
}

const char* Doctor::getName(){
	//printf("\n%s", __FUNCTION__);
	return this->name.c_str();
}

void Doctor::update(std::string notify){
	//printf("\n%s", __FUNCTION__);
	printf("\nSMS sent to Doctor %s ==> patient %s", this->getName(), notify);

}

