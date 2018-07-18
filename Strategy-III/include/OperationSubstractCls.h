/*
 * OperationSubstractCls.h
 *
 *  Created on: 18 Tem 2018
 *      Author: tr1d5042
 */

#ifndef OPERATIONSUBSTRACTCLS_H_
#define OPERATIONSUBSTRACTCLS_H_

#include "StrategyIfc.h"

class OperationSubstractCls : public StrategyIfc {
public:
	OperationSubstractCls();
	virtual ~OperationSubstractCls();
	int doOperation(int num1, int num2);
};

#endif /* OPERATIONSUBSTRACTCLS_H_ */
