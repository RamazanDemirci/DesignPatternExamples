/*
 * Patient.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include <PatientCls.h>
#include <algorithm>

using namespace std;

PatientCls::PatientCls() {
	// TODO Auto-generated constructor stub

}

PatientCls::~PatientCls() {
	// TODO Auto-generated destructor stub
	this->name = "Unknown";
}

PatientCls::PatientCls(std::string name)
{
	this->name = name;
}

void PatientCls::Notify(std::string notify){
	//printf("\n%s", __FUNCTION__);
	for(std::vector<ObserverIfc*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
	{
		if(*iter != 0)
		{
			(*iter)->update(notify);
		}
	}
}

const char* PatientCls::getName(){
	//printf("%s", __FUNCTION__);
	return this->name.c_str();
}
void PatientCls::setName(std::string name){
	//printf("%s", __FUNCTION__);
	this->name = name;
}

const char* PatientCls::getState(){
	//printf("%s", __FUNCTION__);
	return this->state.c_str();
}

void PatientCls::setState(std::string state){
	//printf("%s", __FUNCTION__);
	this->state = state;
	Notify(getState());
}
