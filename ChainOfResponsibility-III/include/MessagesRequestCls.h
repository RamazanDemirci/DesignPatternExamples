/*
 * MessageRequestCls.h
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#ifndef MESSAGESREQUESTCLS_H_
#define MESSAGESREQUESTCLS_H_

#include <string>
#include "RequestCls.h"

class MessagesRequestCls : public RequestCls{
public:
	MessagesRequestCls();
	virtual ~MessagesRequestCls();
	MessagesRequestCls(int deviceID, std::string message);
	int getDeviceID();
	std::string getMessage();
private:
	int deviceID;
	std::string message;
};

#endif /* MESSAGESREQUESTCLS_H_ */
