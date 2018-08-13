/*
 * main.cpp
 *
 *  Created on: 23 Tem 2018
 *      Author: tr1d5042
 */

#include "BikeCls.h"
#include "EngineCls.h"
#include "FuelTankCls.h"
#include "PartsCheckerCls.h"
#include "PartsOperatorCls.h"

int main(){
	BikeCls *bike = new BikeCls();
	VisitableIfc *engine = new EngineCls();
	VisitableIfc *fuelTank = new FuelTankCls();

	bike->addBikePart(fuelTank);
	bike->addBikePart(engine);

	printf("\n\n##########%s##########", "Parts Checker Start");
	bike->accept(new PartsCheckerCls());
	printf("\n\n##########%s##########", "Parts Operation Start");
	bike->accept(new PartsOperatorCls());
}

