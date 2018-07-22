/*
 * ContactRequestHandlerCls.cpp
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "ContactRequestCls.h"
#include "ContactRequestHandlerCls.h"

ContactRequestHandlerCls::ContactRequestHandlerCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

ContactRequestHandlerCls::~ContactRequestHandlerCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void ContactRequestHandlerCls::process(RequestCls *request){
//	printf("\n%s", __FUNCTION__);
	if(request->type == RequestType::Contact){
		auto contact = (ContactRequestCls*)request;
		printf("\nProcessing Contact Request. \n  -- Device ID-> %d - Contact Name ->%s"
				, contact->getDeviceID()
				, contact->getContactName().c_str());
	}
}
