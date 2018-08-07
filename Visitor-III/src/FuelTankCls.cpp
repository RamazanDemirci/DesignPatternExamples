/*
 * FuelTankCls.cpp
 *
 *  Created on: 23 Tem 2018
 *      Author: tr1d5042
 */
#include "stdio.h"
#include "FuelTankCls.h"

FuelTankCls::FuelTankCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

FuelTankCls::~FuelTankCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void FuelTankCls::accept(VisitorIfc *visitor){
//	printf("\n%s", __FUNCTION__);
	visitor->visit(this);
}
