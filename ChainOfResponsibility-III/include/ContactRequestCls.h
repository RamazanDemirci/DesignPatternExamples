/*
 * ContactRequestCls.h
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#ifndef CONTACTREQUESTCLS_H_
#define CONTACTREQUESTCLS_H_

#include <string>
#include "RequestCls.h"

class ContactRequestCls : public RequestCls {
public:
	ContactRequestCls();
	virtual ~ContactRequestCls();
	ContactRequestCls(int deviceID, std::string contactName);
	int getDeviceID();
	std::string getContactName();
private:
	int deviceID;
	std::string contactName;
};

#endif /* CONTACTREQUESTCLS_H_ */
