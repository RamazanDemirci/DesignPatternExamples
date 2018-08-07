/*
 * SupervisorCls.cpp
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#include <algorithm>
#include "SupervisorCls.h"

SupervisorCls::SupervisorCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

SupervisorCls::~SupervisorCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

SupervisorCls::SupervisorCls(std::string name, int happiness){
//	printf("\n%s", __FUNCTION__);
	this->name = name;
	this->happiness = happiness;
}
void SupervisorCls::showHappiness(){
//	printf("\n%s", __FUNCTION__);

	printf("\n%s showed happines level of %d"
			, this->name.c_str()
			, this->happiness);
	//show all the subordinate's happiness level
	std::for_each(subOrdinateList.begin(), subOrdinateList.end(), [=](EmployeeIfc* item){
		item->showHappiness();
		printf("\n%s working under %s"
				, item->getName().c_str()
				, this->name.c_str());
		printf("\n******************************************");
	});
}

std::string SupervisorCls::getName(){
	return this->name;
}

void SupervisorCls::addSubordinate(EmployeeIfc *subordinate){
//	printf("\n%s", __FUNCTION__);
	subOrdinateList.push_back(subordinate);
}
