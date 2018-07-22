/*
 * MessagesRequestHandlerCls.cpp
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#include "MessagesRequestHandlerCls.h"
#include "MessagesRequestCls.h"

MessagesRequestHandlerCls::MessagesRequestHandlerCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

MessagesRequestHandlerCls::~MessagesRequestHandlerCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void MessagesRequestHandlerCls::process(RequestCls *request){
//	printf("\n%s", __FUNCTION__);
	if(request->type == RequestType::Messages){
		auto *message = (MessagesRequestCls*)request;
		printf("\nProcessing Messages Request. \n  -- Device ID-> %d - Message ->%s"
				, message->getDeviceID()
				, message->getMessage().c_str());
	}
}
