/*
 * CeilingFanCls.cpp
 *
 *  Created on: 24 Tem 2018
 *      Author: tr1d5042
 */

#include "CeilingFanCls.h"

CeilingFanCls::CeilingFanCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

CeilingFanCls::~CeilingFanCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

CeilingFanCls::CeilingFanCls(std::string location)
:speed(0) {
//	printf("\n%s", __FUNCTION__);
	this->location = location;
}

void CeilingFanCls::off(){
//	printf("\n%s", __FUNCTION__);
	this->speed = OFF;
	printf("\n%s ceiling fan is off", this->location.c_str());
}

void CeilingFanCls::low(){
//	printf("\n%s", __FUNCTION__);
	this->speed = LOW;
	printf("\n%s ceiling fan is on low", this->location.c_str());
}

void CeilingFanCls::medium(){
//	printf("\n%s", __FUNCTION__);
	this->speed = MEDIUM;
	printf("\n%s ceiling fan is on medium", this->location.c_str());
}

void CeilingFanCls::high(){
//	printf("\n%s", __FUNCTION__);
	this->speed = HIGH;
	printf("\n%s ceiling fan is on high", this->location.c_str());
}

int CeilingFanCls::getSpeed(){
//	printf("\n%s", __FUNCTION__);
	return this->speed;
}
