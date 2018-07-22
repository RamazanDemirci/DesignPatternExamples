/*
 * MemoryRequestHandlerCls.h
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#ifndef MEMORYREQUESTHANDLERCLS_H_
#define MEMORYREQUESTHANDLERCLS_H_

#include "RequestCls.h"
#include "RequestHandlerCls.h"

class MemoryRequestHandlerCls : public RequestHandlerCls {
public:
	MemoryRequestHandlerCls();
	virtual ~MemoryRequestHandlerCls();
	void process(RequestCls *request);
};

#endif /* MEMORYREQUESTHANDLERCLS_H_ */
