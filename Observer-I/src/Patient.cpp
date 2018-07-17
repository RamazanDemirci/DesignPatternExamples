/*
 * Patient.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include "Patient.h"
#include <algorithm>

using namespace std;

Patient::Patient() {
	// TODO Auto-generated constructor stub

}

Patient::~Patient() {
	// TODO Auto-generated destructor stub
	this->name = "Unknown";
}

Patient::Patient(std::string name)
{
	this->name = name;
}

void Patient::Notify(std::string notify){
	//printf("\n%s", __FUNCTION__);
	for(std::vector<ObserverIfc*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
	{
		if(*iter != 0)
		{
			(*iter)->update(notify);
		}
	}
}

const char* Patient::getName(){
	//printf("%s", __FUNCTION__);
	return this->name.c_str();
}
void Patient::setName(std::string name){
	//printf("%s", __FUNCTION__);
	this->name = name;
}

const char* Patient::getState(){
	//printf("%s", __FUNCTION__);
	return this->state.c_str();
}

void Patient::setState(std::string state){
	//printf("%s", __FUNCTION__);
	this->state = state;
	Notify(getState());
}
