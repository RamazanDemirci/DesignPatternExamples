/*
 * ChangeOilCommandCls.cpp
 *
 *  Created on: 24 Tem 2018
 *      Author: tr1d5042
 */
#include <stdio.h>
#include "ChangeOilCommandCls.h"

ChangeOilCommandCls::ChangeOilCommandCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

ChangeOilCommandCls::~ChangeOilCommandCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

ChangeOilCommandCls::ChangeOilCommandCls(MechanicCls *mechanic){
//	printf("\n%s", __FUNCTION__);
	this->mechanic = mechanic;
}

void ChangeOilCommandCls::execute(){
//	printf("\n%s", __FUNCTION__);
	this->mechanic->changeOil();
}

