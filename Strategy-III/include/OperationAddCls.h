/*
 * OperationAddCls.h
 *
 *  Created on: 18 Tem 2018
 *      Author: tr1d5042
 */

#ifndef OPERATIONADDCLS_H_
#define OPERATIONADDCLS_H_

#include "StrategyIfc.h"

class OperationAddCls : public StrategyIfc {
public:
	OperationAddCls();
	virtual ~OperationAddCls();
	int doOperation(int num1, int num2);
};

#endif /* OPERATIONADDCLS_H_ */
