/*
 * PartsCheckerCls.cpp
 *
 *  Created on: 23 Tem 2018
 *      Author: tr1d5042
 */
#include <stdio.h>
#include "PartsCheckerCls.h"

PartsCheckerCls::PartsCheckerCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

PartsCheckerCls::~PartsCheckerCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void PartsCheckerCls::visit(BikeCls *bike){
//	printf("\n%s", __FUNCTION__);
	printf("\n%s", "Going to the bike");
}

void PartsCheckerCls::visit(EngineCls *engine){
//	printf("\n%s", __FUNCTION__);
	printf("\n%s", "Checking whether ignition switch is on");
}

void PartsCheckerCls::visit(FuelTankCls *fuelTank){
//	printf("\n%s", __FUNCTION__);
	printf("\n%s", "Checking whether there is fuel in fuel tank");
}
