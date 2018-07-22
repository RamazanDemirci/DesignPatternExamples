/*
 * MemoryRequestHandlerCls.cpp
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "MemoryRequestHandlerCls.h"
#include "MemoryRequestCls.h"

MemoryRequestHandlerCls::MemoryRequestHandlerCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

MemoryRequestHandlerCls::~MemoryRequestHandlerCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void MemoryRequestHandlerCls::process(RequestCls *request){
//	printf("\n%s", __FUNCTION__);
	if(request->type == RequestType::Memory){
		auto memory = (MemoryRequestCls*)request;
		printf("\nProcessing Messages Request. \n  -- Device ID-> %d - Total Memory ->%d  - Memory Left -> %d"
				, memory->getDeviceID()
				, memory->getTotalMemory()
				, memory->getMemoryLeft());
	}
}

