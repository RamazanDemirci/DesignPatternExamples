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
	printf("\n\n%s", "Bike Operation Start");
	printf("\n%s", "Wheels turns");
	printf("\n%s", "Engine runs");
	printf("\n%s", "Bike Operation End");
}

void PartsOperatorCls::visit(EngineCls *engine){
//	printf("\n%s", __FUNCTION__);
	printf("\n\n%s", "Engine Operation Start");
	printf("\n%s", "Ignition is working");
	printf("\n%s", "Pistons are working");
	printf("\n%s", "Engine Operation End");
}

void PartsOperatorCls::visit(FuelTankCls *fuelTank){
//	printf("\n%s", __FUNCTION__);
	printf("\n\n%s", "FuelTank Operation Start");
	printf("\n%s", "Fuel flows");
	printf("\n%s", "Fuel is filtering");
	printf("\n%s", "FuelTank Operation End");
}

