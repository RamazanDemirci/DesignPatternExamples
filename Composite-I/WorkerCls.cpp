/*
 * WorkerCls.cpp
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#include "WorkerCls.h"

WorkerCls::WorkerCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

WorkerCls::~WorkerCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

WorkerCls::WorkerCls(std::string name, int happiness){
//	printf("\n%s", __FUNCTION__);
	this->name = name;
	this->happiness = happiness;
}

/*virtual*/ void WorkerCls::showHappiness(){
//	printf("\n%s", __FUNCTION__);
	printf("\n%s showed happiness level of %d"
			, this->name.c_str()
			, this->happiness);
}

std::string WorkerCls::getName(){
	return this->name;
}
