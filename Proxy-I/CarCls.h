/*
 * CarCls.h
 *
 *  Created on: 5 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef CARCLS_H_
#define CARCLS_H_

#include "CarIfc.h"

class CarCls : public CarIfc {
public:
	CarCls();
	virtual ~CarCls();
	/*virtual*/ void moveCar();
};

#endif /* CARCLS_H_ */
