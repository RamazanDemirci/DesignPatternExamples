/*
 * Nurse.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include "Nurse.h"
#include "Patient.h"
#include <stdio.h>

Nurse::Nurse() {
	// TODO Auto-generated constructor stub
	this->name = "Unknown";
}

Nurse::~Nurse() {
	// TODO Auto-generated destructor stub
}

Nurse::Nurse(std::string name) {
	//printf("\n%s", __FUNCTION__);
	this->name = name;
}

const char* Nurse::getName(){
	//printf("\n%s", __FUNCTION__);
	return this->name.c_str();
}

void Nurse::update(std::string notify){
	//printf("\n%s", __FUNCTION__);
	printf("\nSMS sent to Nurse %s :::::>> patient %s", this->getName(), notify);

}

