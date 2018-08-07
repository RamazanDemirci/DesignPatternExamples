/*
 * VisitorIfc.h
 *
 *  Created on: 23 Tem 2018
 *      Author: tr1d5042
 */

#ifndef VISITORIFC_H_
#define VISITORIFC_H_

class BikeCls;
class EngineCls;
class FuelTankCls;

class VisitorIfc {
public:
	virtual void visit(BikeCls *bike) = 0;
	virtual void visit(EngineCls *engine) = 0;
	virtual void visit(FuelTankCls *fuelTank) = 0;
};


#endif /* VISITORIFC_H_ */
