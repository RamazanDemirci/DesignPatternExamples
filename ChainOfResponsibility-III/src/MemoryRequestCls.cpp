/*
 * MemoryRequestCls.cpp
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "MemoryRequestCls.h"

MemoryRequestCls::MemoryRequestCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

MemoryRequestCls::~MemoryRequestCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

MemoryRequestCls::MemoryRequestCls(int deviceID, int totalMemory, int memoryLeft)
: RequestCls(RequestType::Memory){
//	printf("\n%s", __FUNCTION__);
	this->deviceID = deviceID;
	this->totalMemory = totalMemory;
	this->memoryLeft = memoryLeft;
}

int MemoryRequestCls::getDeviceID(){
//	printf("\n%s", __FUNCTION__);
	return this->deviceID;
}

int MemoryRequestCls::getTotalMemory(){
//	printf("\n%s", __FUNCTION__);
	return this->totalMemory;
}

int MemoryRequestCls::getMemoryLeft(){
//	printf("\n%s", __FUNCTION__);
	return this->memoryLeft;
}
