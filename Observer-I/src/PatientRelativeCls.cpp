/*
 * PatientRelative.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include <PatientRelativeCls.h>
#include <algorithm>

PatientRelativeCls::PatientRelativeCls() {
	// TODO Auto-generated constructor stub

}

PatientRelativeCls::~PatientRelativeCls() {
	// TODO Auto-generated destructor stub
	this->name = "Unknown";
}

PatientRelativeCls::PatientRelativeCls(std::string name)
{
	this->name = name;
}

const char* PatientRelativeCls::getName(){
	//printf("%s", __FUNCTION__);
	return this->name.c_str();
}
void PatientRelativeCls::setName(std::string name){
	//printf("%s", __FUNCTION__);
	this->name = name;
}

const char* PatientRelativeCls::getState(){
	//printf("%s", __FUNCTION__);
	return this->state.c_str();
}

void PatientRelativeCls::setState(std::string state){
	//printf("%s", __FUNCTION__);
	this->state = state;
	Notify(getState());
}

void PatientRelativeCls::Notify(std::string notify){
	//printf("\n%s", __FUNCTION__);
	for(std::vector<ObserverIfc*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
	{
		if(*iter != 0)
		{
			(*iter)->update(notify);
		}
	}
}
