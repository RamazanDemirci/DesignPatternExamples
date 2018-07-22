/*
 * MessagesRequestHandlerCls.h
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#ifndef MESSAGESREQUESTHANDLERCLS_H_
#define MESSAGESREQUESTHANDLERCLS_H_

#include "RequestCls.h"
#include "RequestHandlerCls.h"

class MessagesRequestHandlerCls : public RequestHandlerCls{
public:
	MessagesRequestHandlerCls();
	virtual ~MessagesRequestHandlerCls();
protected:
	void process(RequestCls *request);
};

#endif /* MESSAGESREQUESTHANDLERCLS_H_ */
