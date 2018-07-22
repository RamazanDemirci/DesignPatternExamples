/*
 * MessageRequestCls.cpp
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#include "MessagesRequestCls.h"

MessagesRequestCls::MessagesRequestCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

MessagesRequestCls::~MessagesRequestCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

MessagesRequestCls::MessagesRequestCls(int deviceID, std::string message)
: RequestCls(RequestType::Messages){
//	printf("\n%s", __FUNCTION__);
	this->deviceID = deviceID;
	this->message = message;
}

int MessagesRequestCls::getDeviceID(){
//	printf("\n%s", __FUNCTION__);
	return this->deviceID;
}

std::string MessagesRequestCls::getMessage(){
//	printf("\n%s", __FUNCTION__);
	return this->message;
}
