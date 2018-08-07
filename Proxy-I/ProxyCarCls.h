/*
 * ProxyCarCls.h
 *
 *  Created on: 5 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef PROXYCARCLS_H_
#define PROXYCARCLS_H_

#include "DriverCls.h"
#include "CarIfc.h"

class ProxyCarCls : public CarIfc {
public:
	ProxyCarCls();
	virtual ~ProxyCarCls();
	ProxyCarCls(DriverCls *driver);
	/*virtual*/ void moveCar();
private:
	DriverCls *driver;
	CarIfc *realCar;
};

#endif /* PROXYCARCLS_H_ */
