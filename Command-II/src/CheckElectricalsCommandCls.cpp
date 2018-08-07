/*
 * ChangeElectricalsCommandCls.cpp
 *
 *  Created on: 24 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "CheckElectricalsCommandCls.h"

CheckElectricalsCommandCls::CheckElectricalsCommandCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

CheckElectricalsCommandCls::~CheckElectricalsCommandCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

CheckElectricalsCommandCls::CheckElectricalsCommandCls(MechanicCls *mechanic){
//	printf("\n%s", __FUNCTION__);
	this->mechanic = mechanic;
}

void CheckElectricalsCommandCls::execute(){
//	printf("\n%s", __FUNCTION__);
	this->mechanic->checkElectricals();
}
