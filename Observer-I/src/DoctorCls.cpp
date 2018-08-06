/*
 * Doctor.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include <DoctorCls.h>
#include <PatientCls.h>
#include <stdio.h>

DoctorCls::DoctorCls() {
	// TODO Auto-generated constructor stub
	this->name = "Unknown";
}

DoctorCls::~DoctorCls() {
	// TODO Auto-generated destructor stub
}

DoctorCls::DoctorCls(std::string name) {
	//printf("\n%s", __FUNCTION__);
	this->name = name;
}

const char* DoctorCls::getName(){
	//printf("\n%s", __FUNCTION__);
	return this->name.c_str();
}

void DoctorCls::update(std::string notify){
	//printf("\n%s", __FUNCTION__);
	printf("\nSMS sent to Doctor %s ==> patient %s", this->getName(), notify);

}

