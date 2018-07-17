/*
 * PatientRelative.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include "PatientRelative.h"
#include <algorithm>

PatientRelative::PatientRelative() {
	// TODO Auto-generated constructor stub

}

PatientRelative::~PatientRelative() {
	// TODO Auto-generated destructor stub
	this->name = "Unknown";
}

PatientRelative::PatientRelative(std::string name)
{
	this->name = name;
}

const char* PatientRelative::getName(){
	//printf("%s", __FUNCTION__);
	return this->name.c_str();
}
void PatientRelative::setName(std::string name){
	//printf("%s", __FUNCTION__);
	this->name = name;
}

const char* PatientRelative::getState(){
	//printf("%s", __FUNCTION__);
	return this->state.c_str();
}

void PatientRelative::setState(std::string state){
	//printf("%s", __FUNCTION__);
	this->state = state;
	Notify(getState());
}

void PatientRelative::Notify(std::string notify){
	//printf("\n%s", __FUNCTION__);
	for(std::vector<ObserverIfc*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
	{
		if(*iter != 0)
		{
			(*iter)->update(notify);
		}
	}
}
