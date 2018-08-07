/*
 * ManagerCls.cpp
 *
 *  Created on: 27 Tem 2018
 *      Author: tr1d5042
 */

#include "ManagerCls.h"

ManagerCls::ManagerCls() {
	// TODO Auto-generated constructor stub

}

ManagerCls::~ManagerCls() {
	// TODO Auto-generated destructor stub
}

ManagerCls::ManagerCls(std::string name, double s){
	this->name = name;
	setWeeklySalary(s);
}

void ManagerCls::setWeeklySalary(double s){
	if(s > 0){
		weeklySalary = s;
	}
	else{
		weeklySalary = 0;
	}
}

double ManagerCls::earnings(){
	return weeklySalary;
}

std::string ManagerCls::getName(){
	return name;
}

std::string ManagerCls::toString(){
	return std::string("Manager:" + getName());
}

