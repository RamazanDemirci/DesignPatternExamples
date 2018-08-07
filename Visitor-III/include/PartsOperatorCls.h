/*
 * PartsOperatorCls.h
 *
 *  Created on: 23 Tem 2018
 *      Author: tr1d5042
 */

#ifndef PARTSOPERATORCLS_H_
#define PARTSOPERATORCLS_H_

#include "VisitorIfc.h"
//#include "BikeCls.h"
//#include "EngineCls.h"
//#include "FuelTankCls.h"

class PartsOperatorCls : public VisitorIfc {
public:
	PartsOperatorCls();
	virtual ~PartsOperatorCls();
	void visit(BikeCls *bike);
	void visit(EngineCls *engine);
	void visit(FuelTankCls *fuelTank);
};

#endif /* PARTSOPERATORCLS_H_ */
