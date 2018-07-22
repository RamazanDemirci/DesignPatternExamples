/*
 * LocationRequestHandlerCls.cpp
 *
 *  Created on: 22 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "LocationRequestHandlerCls.h"
#include "LocationRequestCls.h"

LocationRequestHandlerCls::LocationRequestHandlerCls() {
	// TODO Auto-generated constructor stub

}

LocationRequestHandlerCls::~LocationRequestHandlerCls() {
	// TODO Auto-generated destructor stub
}

void LocationRequestHandlerCls::process(RequestCls *request){
	if(request->type == RequestType::Location){
		auto location = (LocationRequestCls*)request;
		printf("Processing Location Request. \n  -- Device ID-> %d -  Latitude->%d  - Longitude -> %d"
				, location->getDeviceID()
				, location->getLatitude()
				, location->getLongitude());
	}
}
