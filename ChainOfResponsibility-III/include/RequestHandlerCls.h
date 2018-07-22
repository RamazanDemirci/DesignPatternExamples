/*
 * RequestHandlerCls.h
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#ifndef REQUESTHANDLERCLS_H_
#define REQUESTHANDLERCLS_H_

#include "RequestCls.h"

class RequestHandlerCls {
public:
	RequestHandlerCls();
	virtual ~RequestHandlerCls();
	void execute(RequestCls *request);
	RequestHandlerCls* setNextHandler(RequestHandlerCls *handler);
protected:
	virtual void process(RequestCls *request) = 0;
private:
	RequestHandlerCls *nextHandler;

	void pushNext(RequestCls *request);
};

#endif /* REQUESTHANDLERCLS_H_ */
