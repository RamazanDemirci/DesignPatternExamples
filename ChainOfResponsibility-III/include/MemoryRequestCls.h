/*
 * MemoryRequestCls.h
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#ifndef MEMORYREQUESTCLS_H_
#define MEMORYREQUESTCLS_H_

#include "RequestCls.h"

class MemoryRequestCls : public RequestCls {
public:
	MemoryRequestCls();
	virtual ~MemoryRequestCls();
	MemoryRequestCls(int deviceID, int totalMemory, int memoryLeft);
	int getDeviceID();
	int getTotalMemory();
	int getMemoryLeft();
private:
	int deviceID;
	int totalMemory;
	int memoryLeft;
};

#endif /* MEMORYREQUESTCLS_H_ */
