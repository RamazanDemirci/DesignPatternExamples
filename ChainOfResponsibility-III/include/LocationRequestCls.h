/*
 * LocationRequestCls.h
 *
 *  Created on: 22 Tem 2018
 *      Author: tr1d5042
 */

#ifndef LOCATIONREQUESTCLS_H_
#define LOCATIONREQUESTCLS_H_

#include "RequestCls.h"

class LocationRequestCls : public RequestCls {
public:
	LocationRequestCls();
	virtual ~LocationRequestCls();
	LocationRequestCls(int deviceID, int latitude, int longitude);
	int getDeviceID();
	int getLatitude();
	int getLongitude();
private:
	int deviceID;
	int latitude;
	int longitude;
};

#endif /* LOCATIONREQUESTCLS_H_ */
