/*
 * OperationMultiplyCls.h
 *
 *  Created on: 18 Tem 2018
 *      Author: tr1d5042
 */

#ifndef OPERATIONMULTIPLYCLS_H_
#define OPERATIONMULTIPLYCLS_H_

#include "StrategyIfc.h"

class OperationMultiplyCls : public StrategyIfc {
public:
	OperationMultiplyCls();
	virtual ~OperationMultiplyCls();
	int doOperation(int num1, int num2);
};

#endif /* OPERATIONMULTIPLYCLS_H_ */
