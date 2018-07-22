/*
 * ContactRequestHandlerCls.h
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#ifndef CONTACTREQUESTHANDLERCLS_H_
#define CONTACTREQUESTHANDLERCLS_H_

#include "RequestHandlerCls.h"

class ContactRequestHandlerCls : public RequestHandlerCls {
public:
	ContactRequestHandlerCls();
	virtual ~ContactRequestHandlerCls();
protected:
	void process(RequestCls *request);
};

#endif /* CONTACTREQUESTHANDLERCLS_H_ */
