/*
 * PartsOperatorCls.cpp
 *
 *  Created on: 23 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "PartsOperatorCls.h"

PartsOperatorCls::PartsOperatorCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

PartsOperatorCls::~PartsOperatorCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void PartsOperatorCls::visit(BikeCls *bike){
//	printf("\n%s", __FUNCTION__);
	printf("\n%s", "Now going to start bike");
}

void PartsOperatorCls::visit(EngineCls *engine){
//	printf("\n%s", __FUNCTION__);
	printf("\n%s", "Accepting fuel from fuel tank and running engine");
}

void PartsOperatorCls::visit(FuelTankCls *fuelTank){
//	printf("\n%s", __FUNCTION__);
	printf("\n%s", "Releasing fuel from fuel tank to Engine");
}

