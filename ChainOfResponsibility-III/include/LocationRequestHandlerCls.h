/*
 * LocationRequestHandlerCls.h
 *
 *  Created on: 22 Tem 2018
 *      Author: tr1d5042
 */

#ifndef LOCATIONREQUESTHANDLERCLS_H_
#define LOCATIONREQUESTHANDLERCLS_H_

#include "RequestHandlerCls.h"

class LocationRequestHandlerCls : public RequestHandlerCls {
public:
	LocationRequestHandlerCls();
	virtual ~LocationRequestHandlerCls();
protected:
	virtual void process(RequestCls *request);
};

#endif /* LOCATIONREQUESTHANDLERCLS_H_ */
