/*
 * CeilingFanHighCommandCls.cpp
 *
 *  Created on: 25 Tem 2018
 *      Author: tr1d5042
 */

#include "CeilingFanHighCommandCls.h"

CeilingFanHighCommandCls::CeilingFanHighCommandCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

CeilingFanHighCommandCls::~CeilingFanHighCommandCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

CeilingFanHighCommandCls::CeilingFanHighCommandCls(CeilingFanCls *ceilingFan)
: prevSpeed(0) {
//	printf("\n%s", __FUNCTION__);
	this->ceilingFan = ceilingFan;
}

void CeilingFanHighCommandCls::execute(){
//	printf("\n%s", __FUNCTION__);
	this->prevSpeed = ceilingFan->getSpeed();
	this->ceilingFan->high();
}

void CeilingFanHighCommandCls::undo(){
//	printf("\n%s", __FUNCTION__);
	if (prevSpeed == CeilingFanCls::HIGH) {
		ceilingFan->high();
	} else if (prevSpeed == CeilingFanCls::MEDIUM) {
		ceilingFan->medium();
	} else if (prevSpeed == CeilingFanCls::LOW) {
		ceilingFan->low();
	} else if (prevSpeed == CeilingFanCls::OFF) {
		ceilingFan->off();
	}
}
