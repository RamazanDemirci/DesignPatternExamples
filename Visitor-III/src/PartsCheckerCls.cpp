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
	printf("\n\n%s", "Bike Checking Start");
	printf("\n %s", "Electric Systems Checked");
	printf("\n %s", "Gear Checked");
	printf("\n %s", "Wheel Checked");
	printf("\n%s", "Bike Checking End");
}

void PartsCheckerCls::visit(EngineCls *engine){
//	printf("\n%s", __FUNCTION__);
	printf("\n\n%s", "Engine Checking Start");
	printf("\n %s", "Pistons Checked");
	printf("\n %s", "Shaft Checked");
	printf("\n %s", "Ignition Systems Checked");
	printf("\n%s", "Engine Checking End");
}

void PartsCheckerCls::visit(FuelTankCls *fuelTank){
//	printf("\n%s", __FUNCTION__);
	printf("\n\n%s", "FuelTank Checking Start");
	printf("\n %s", "Fullness  Checked");
	printf("\n %s", "Filter Checked");
	printf("\n %s", "Electronic Checked");
	printf("\n%s", "FuelTank Checking End");
}
