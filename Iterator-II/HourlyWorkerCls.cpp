/*
 * HourlyWorkerCls.cpp
 *
 *  Created on: 27 Tem 2018
 *      Author: tr1d5042
 */

#include "HourlyWorkerCls.h"

HourlyWorkerCls::HourlyWorkerCls() {
	// TODO Auto-generated constructor stub

}

HourlyWorkerCls::~HourlyWorkerCls() {
	// TODO Auto-generated destructor stub
}

HourlyWorkerCls::HourlyWorkerCls(std::string name, double w, double h){
	this->name = name;
	setHourlyWage(w);
	setHours(h);
}

void HourlyWorkerCls::setHourlyWage(double w){
	if (w > 0){
		hourlyWage = w;
	}
	else{
		hourlyWage = 0;
	}
}

void HourlyWorkerCls::setHours(double h){
	if ( 0 <= h && h < 168){
		hours = h;
	}
	else{
		hours = 0;
	}
}

std::string HourlyWorkerCls::getName(){
	return name;
}

double HourlyWorkerCls::earning(){
	return (hourlyWage * hours);
}

std::string HourlyWorkerCls::toString(){
	return std::string("Hourly worker: " + getName());
}
