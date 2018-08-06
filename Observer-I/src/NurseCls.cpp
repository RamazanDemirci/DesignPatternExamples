/*
 * Nurse.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include <NurseCls.h>
#include <PatientCls.h>
#include <stdio.h>

NurseCls::NurseCls() {
	// TODO Auto-generated constructor stub
	this->name = "Unknown";
}

NurseCls::~NurseCls() {
	// TODO Auto-generated destructor stub
}

NurseCls::NurseCls(std::string name) {
	//printf("\n%s", __FUNCTION__);
	this->name = name;
}

const char* NurseCls::getName(){
	//printf("\n%s", __FUNCTION__);
	return this->name.c_str();
}

void NurseCls::update(std::string notify){
	//printf("\n%s", __FUNCTION__);
	printf("\nSMS sent to Nurse %s :::::>> patient %s", this->getName(), notify);

}

