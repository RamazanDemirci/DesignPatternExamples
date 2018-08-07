/*
 * DriverCls.cpp
 *
 *  Created on: 5 Ağu 2018
 *      Author: tr1d5042
 */

#include "DriverCls.h"

DriverCls::DriverCls() {
	// TODO Auto-generated constructor stub

}

DriverCls::~DriverCls() {
	// TODO Auto-generated destructor stub
}

DriverCls::DriverCls(int age){
	this->age = age;
}

int DriverCls::getAge(){
	return age;
}

void DriverCls::setAge(int age){
	this->age = age;
}
