/*
 * ContactRequestCls.cpp
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#include "ContactRequestCls.h"

ContactRequestCls::ContactRequestCls() : RequestCls(RequestType::Contact){
	// TODO Auto-generated constructor stub
	printf("\n%s", __FUNCTION__);
}

ContactRequestCls::~ContactRequestCls() {
	// TODO Auto-generated destructor stub
	printf("\n%s", __FUNCTION__);
}

ContactRequestCls::ContactRequestCls(int deviceID, std::string contactName)
: RequestCls(RequestType::Contact) {
//	printf("\n%s", __FUNCTION__);
	this->deviceID = deviceID;
	this->contactName = contactName;
}

int ContactRequestCls::getDeviceID(){
//	printf("\n%s", __FUNCTION__);
	return this->deviceID;
}

std::string ContactRequestCls::getContactName(){
	printf("\n%s", __FUNCTION__);
	return  this->contactName;
}
