/*
 * LocationRequestCls.cpp
 *
 *  Created on: 22 Tem 2018
 *      Author: tr1d5042
 */

#include "LocationRequestCls.h"

LocationRequestCls::LocationRequestCls() {
	// TODO Auto-generated constructor stub

}

LocationRequestCls::~LocationRequestCls() {
	// TODO Auto-generated destructor stub
}

LocationRequestCls::LocationRequestCls(int deviceID, int latitude, int longitude)
: RequestCls(RequestType::Location){
	this->deviceID = deviceID;
	this->latitude = latitude;
	this->longitude = longitude;
}

int LocationRequestCls::getDeviceID(){
	return this->deviceID;
}

int LocationRequestCls::getLatitude(){
	return this->latitude;
}

int LocationRequestCls::getLongitude(){
	return this->longitude;
}

