/*
 * FuelTankCls.h
 *
 *  Created on: 23 Tem 2018
 *      Author: tr1d5042
 */

#ifndef FUELTANKCLS_H_
#define FUELTANKCLS_H_

#include "VisitableIfc.h"

class FuelTankCls : public VisitableIfc {
public:
	FuelTankCls();
	virtual ~FuelTankCls();
	void accept(VisitorIfc *visitor);
};

#endif /* FUELTANKCLS_H_ */
