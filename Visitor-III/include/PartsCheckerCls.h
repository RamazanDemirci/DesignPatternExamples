/*
 * PartsCheckerCls.h
 *
 *  Created on: 23 Tem 2018
 *      Author: tr1d5042
 */

#ifndef PARTSCHECKERCLS_H_
#define PARTSCHECKERCLS_H_

#include "VisitorIfc.h"
//#include "BikeCls.h"
//#include "EngineCls.h"
//#include "FuelTankCls.h"

class PartsCheckerCls : public VisitorIfc {
public:
	PartsCheckerCls();
	virtual ~PartsCheckerCls();
	void visit(BikeCls *bike);
	void visit(EngineCls *engine);
	void visit(FuelTankCls *fuelTank);
};

#endif /* PARTSCHECKERCLS_H_ */
