/*
 * FactoryCls.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef FACTORYCLS_H_
#define FACTORYCLS_H_

#include "IceCreamIfc.h"

class FactoryCls {
public:
	FactoryCls();
	virtual ~FactoryCls();
	static IceCreamIfc* Get(int id);
};

#endif /* FACTORYCLS_H_ */
